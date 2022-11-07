/*
 * Aurora: https://github.com/pixelmatix/aurora
 * Copyright (c) 2014 Jason Coon
 * Adapted by 3tawi
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#ifndef AudioLogic_H
#define AudioLogic_H

#include "arduinoFFT.h"


#define AUDIO_PIN 34
#define NOISE           0    
#define bandCount       16            // To change this, you will need to change the bunch of if statements describing the mapping from bins to bands
#define SAMPLES         512          // Must be a power of 2
#define SAMPLING_FREQ   40000
double vReal[SAMPLES];
double vImag[SAMPLES];
unsigned int sampling_period_us;      
int bandValues[bandCount];  
int levels[bandCount];  
int barcolor[bandCount];
int totalevels = 0;
uint16_t totalcolor = 0;
unsigned long newTime;
arduinoFFT FFT = arduinoFFT(vReal, vImag, SAMPLES, SAMPLING_FREQ);


void ReadAudio() {

  for (int i = 0; i < SAMPLES; i++) {
    newTime = micros();
    vReal[i] = analogRead(AUDIO_PIN);
    vImag[i] = 0;
    while ((micros() - newTime) < sampling_period_us) { /* chill */ }
  }

  // Compute FFT
  FFT.DCRemoval();
  FFT.Windowing(FFT_WIN_TYP_HAMMING, FFT_FORWARD);
  FFT.Compute(FFT_FORWARD);
  FFT.ComplexToMagnitude();
  // Analyse FFT results
  for (int i = 2; i < (SAMPLES/2); i++){       // Don't use sample 0 and only first SAMPLES/2 are usable. Each array element represents a frequency bin and its value the amplitude.
    
    if (vReal[i] > NOISE) {                    // Add a crude noise filter
      if (i<=2 )           bandValues[0]  += (int)vReal[i];
      if (i>2   && i<=3  ) bandValues[1]  += (int)vReal[i];
      if (i>3   && i<=5  ) bandValues[2]  += (int)vReal[i];
      if (i>5   && i<=7  ) bandValues[3]  += (int)vReal[i];
      if (i>7   && i<=9  ) bandValues[4]  += (int)vReal[i];
      if (i>9   && i<=13 ) bandValues[5]  += (int)vReal[i];
      if (i>13  && i<=18 ) bandValues[6]  += (int)vReal[i];
      if (i>18  && i<=25 ) bandValues[7]  += (int)vReal[i];
      if (i>25  && i<=36 ) bandValues[8]  += (int)vReal[i];
      if (i>36  && i<=50 ) bandValues[9]  += (int)vReal[i];
      if (i>50  && i<=69 ) bandValues[10] += (int)vReal[i];
      if (i>69  && i<=97 ) bandValues[11] += (int)vReal[i];
      if (i>97  && i<=127) bandValues[12] += (int)vReal[i];
      if (i>127 && i<=163) bandValues[13] += (int)vReal[i];
      if (i>163 && i<=204) bandValues[14] += (int)vReal[i];
      if (i>204          ) bandValues[15] += (int)vReal[i];
    }
  }
  // Process the FFT data into bar heights
  totalevels = 0;
  for (byte band = 0; band < bandCount; band++) {
    // Scale the bars for the display
    // int barHeight = bandValues[band];
    // Serial.println(barHeight);
    int barHeight = bandValues[band] / sp1;
    if (barHeight > 31) barHeight = 31;
    levels[band] = (barHeight + levels[band]) / 2;
    totalevels += barHeight;
    barcolor[band] = ((levels[band]*3)+barHeight)%92;
    bandValues[band] = 0;
  }
  totalcolor = totalevels % 92;
  totalevels /= bandCount;
  totalevels = map(totalevels, 0, 31, -90, 90);
}

#endif

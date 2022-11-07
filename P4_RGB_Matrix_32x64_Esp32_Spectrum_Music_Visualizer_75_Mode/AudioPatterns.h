/*
 * Adapted by 3tawi
 * Aurora: https://github.com/pixelmatix/aurora
 * Copyright (c) 2014 Jason Coon
 *
 * http://www.stefan-petrick.de/wordpress_beta
 * Copyright (c) 2014 Stefan Petrick
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#ifndef AudioPatterns_H
#define AudioPatterns_H

class AudioPatterns : public Playlist {
  private:
  const int CENTRE_X = 32;
  const int CENTRE_Y = 16;
  public:
    typedef void (AudioPatterns::*AudioPatternFunctionPointer)(void);
    AudioPatternFunctionPointer currentItem;
    static const int PATTERN_COUNT = 75;
    AudioPatternFunctionPointer shuffledItems[PATTERN_COUNT];
    AudioPatternFunctionPointer items[PATTERN_COUNT] = {
      &AudioPatterns::SpMuAudio1,
      &AudioPatterns::SpMuAudio2,
      &AudioPatterns::SpMuAudio3,
      &AudioPatterns::SpMuAudio4,
      &AudioPatterns::SpMuAudio5,
      &AudioPatterns::SpMuAudio6,
      &AudioPatterns::SpMuAudio7,
      &AudioPatterns::SpMuAudio8,
      &AudioPatterns::SpMuAudio9,
      &AudioPatterns::SpMuAudio10,
      &AudioPatterns::SpMuAudio11,
      &AudioPatterns::SpMuAudio12,
      &AudioPatterns::SpMuAudio13,
      &AudioPatterns::SpMuAudio14,
      &AudioPatterns::SpMuAudio15,
      &AudioPatterns::SpMuAudio16,
      &AudioPatterns::SpMuAudio17,
      &AudioPatterns::SpMuAudio18,
      &AudioPatterns::SpMuAudio19,
      &AudioPatterns::SpMuAudio20,
      &AudioPatterns::SpMuAudio21,
      &AudioPatterns::SpMuAudio22,
      &AudioPatterns::SpMuAudio23,
      &AudioPatterns::SpMuAudio24,
      &AudioPatterns::SpMuAudio25,
      &AudioPatterns::SpMuAudio26,
      &AudioPatterns::SpMuAudio27,
      &AudioPatterns::SpMuAudio28,
      &AudioPatterns::SpMuAudio29,
      &AudioPatterns::SpMuAudio30,
      &AudioPatterns::SpMuAudio31,
      &AudioPatterns::SpMuAudio32,
      &AudioPatterns::SpMuAudio33,
      &AudioPatterns::SpMuAudio34,
      &AudioPatterns::SpMuAudio35,
      &AudioPatterns::SpMuAudio36,
      &AudioPatterns::SpMuAudio37,
      &AudioPatterns::SpMuAudio38,
      &AudioPatterns::SpMuAudio39,
      &AudioPatterns::SpMuAudio40,
      &AudioPatterns::SpMuAudio41,
      &AudioPatterns::SpMuAudio42,
      &AudioPatterns::SpMuAudio43,
      &AudioPatterns::SpMuAudio44,
      &AudioPatterns::SpMuAudio45,
      &AudioPatterns::SpMuAudio46,
      &AudioPatterns::SpMuAudio47,
      &AudioPatterns::SpMuAudio48,
      &AudioPatterns::SpMuAudio49,
      &AudioPatterns::SpMuAudio50,
      &AudioPatterns::SpMuAudio51,
      &AudioPatterns::SpMuAudio52,
      &AudioPatterns::SpMuAudio53,
      &AudioPatterns::SpMuAudio54,
      &AudioPatterns::SpMuAudio55,
      &AudioPatterns::SpMuAudio56,
      &AudioPatterns::SpMuAudio57,
      &AudioPatterns::SpMuAudio58,
      &AudioPatterns::SpMuAudio59,
      &AudioPatterns::SpMuAudio60,
      &AudioPatterns::SpMuAudio61,
      &AudioPatterns::SpMuAudio62,
      &AudioPatterns::SpMuAudio63,
      &AudioPatterns::SpMuAudio64,
      &AudioPatterns::SpMuAudio65,
      &AudioPatterns::SpMuAudio66,
      &AudioPatterns::SpMuAudio67,
      &AudioPatterns::SpMuAudio68,
      &AudioPatterns::SpMuAudio69,
      &AudioPatterns::SpMuAudio70,
      &AudioPatterns::SpMuAudio71,
      &AudioPatterns::SpMuAudio72,
      &AudioPatterns::SpMuAudio73,
      &AudioPatterns::SpMuAudio74,
      &AudioPatterns::SpMuAudio75
    };
    
    void SpMuAudio1() {
      drawAudio1(0);
    }
    void SpMuAudio2() {
      drawAudio1(1);
    }
    void SpMuAudio3() {
      drawAudio1(2);
    }
    void SpMuAudio4() {
      drawAudio1(3);
    }
    void SpMuAudio5() {
      drawAudio1(4);
    }
    void SpMuAudio6() {
      drawAudio1(5);
    }
    void SpMuAudio7() {
      drawAudio1(6);
    }
    void SpMuAudio8() {
      drawAudio1(7);
    }
    void SpMuAudio9() {
      drawAudio1(8);
    }
    void SpMuAudio10() {
      drawAudio1(9);
    }
    void SpMuAudio11() {
      drawAudio1(10);
    }
    void SpMuAudio12() {
      drawAudio1(11);
    }
    void SpMuAudio13() {
      drawAudio1(12);
    }
    void SpMuAudio14() {
      drawAudio1(13);
    }
    void SpMuAudio15() {
      drawAudio2(0);
    }
    void SpMuAudio16() {
      drawAudio2(1);
    }
    void SpMuAudio17() {
      drawAudio2(2);
    }
    void SpMuAudio18() {
      drawAudio2(3);
    }
    void SpMuAudio19() {
      drawAudio2(4);
    }
    void SpMuAudio20() {
      drawAudio2(5);
    }
    void SpMuAudio21() {
      drawAudio2(6);
    }
    void SpMuAudio22() {
      drawAudio2(7);
    }
    void SpMuAudio23() {
      drawAudio2(8);
    }
    void SpMuAudio24() {
      drawAudio2(9);
    }
    void SpMuAudio25() {
      drawAudio2(10);
    }
    void SpMuAudio26() {
      drawAudio2(11);
    }
    void SpMuAudio27() {
      drawAudio2(12);
    }
    void SpMuAudio28() {
      drawAudio3(0);
    }
    void SpMuAudio29() {
      drawAudio3(1);
    }
    void SpMuAudio30() {
      drawAudio3(2);
    }
    void SpMuAudio31() {
      drawAudio3(3);
    }
    void SpMuAudio32() {
      drawAudio3(4);
    }
    void SpMuAudio33() {
      drawAudio3(5);
    }
    void SpMuAudio34() {
      drawAudio3(6);
    }
    void SpMuAudio35() {
      drawAudio3(7);
    }
    void SpMuAudio36() {
      drawAudio3(8);
    }
    void SpMuAudio37() {
      drawAudio3(9);
    }
    void SpMuAudio38() {
      drawAudio3(10);
    }
    void SpMuAudio39() {
      drawAudio4(0);
    }
    void SpMuAudio40() {
      drawAudio4(1);
    }
    void SpMuAudio41() {
      drawAudio4(2);
    }
    void SpMuAudio42() {
      drawAudio4(3);
    }
    void SpMuAudio43() {
      drawAudio4(4);
    }
    void SpMuAudio44() {
      drawAudio4(5);
    }
    void SpMuAudio45() {
      drawAudio4(6);
    }
    void SpMuAudio46() {
      drawAudio4(7);
    }
    void SpMuAudio47() {
      drawAudio4(8);
    }
    void SpMuAudio48() {
      drawAudio4(9);
    }
    void SpMuAudio49() {
      drawAudio4(10);
    }
    void SpMuAudio50() {
      drawAudio5(0);
      drawAudio6(0);
    }
    void SpMuAudio51() {
      drawAudio5(1);
      drawAudio6(1);
    }
    void SpMuAudio52() {
      drawAudio5(2);
      drawAudio6(2);
    }
    void SpMuAudio53() {
      drawAudio5(3);
      drawAudio6(3);
    }
    void SpMuAudio54() {
      drawAudio5(4);
      drawAudio6(4);
    }
    void SpMuAudio55() {
      drawAudio5(5);
      drawAudio6(5);
    }
    void SpMuAudio56() {
      drawAudio5(6);
      drawAudio6(6);
    }
    void SpMuAudio57() {
      drawAudio5(7);
      drawAudio6(7);
    }
    void SpMuAudio58() {
      drawAudio5(8);
      drawAudio6(8);
    }
    void SpMuAudio59() {
      drawAudio5(9);
      drawAudio6(9);
    }
    void SpMuAudio60() {
      drawAudio5(10);
      drawAudio6(10);
    }
    void SpMuAudio61() {
      drawAudio7(0);
    }
    void SpMuAudio62() {
      drawAudio7(1);
    }
    void SpMuAudio63() {
      drawAudio7(2);
    }
    void SpMuAudio64() {
      drawAudio7(3);
    }
    void SpMuAudio65() {
      drawAudio7(4);
    }
    void SpMuAudio66() {
      drawAudio7(5);
    }
    void SpMuAudio67() {
      drawAudio7(6);
    }
    void SpMuAudio68() {
      drawAudio7(7);
    }
    void SpMuAudio69() {
      drawAudio7(8);
    }
    void SpMuAudio70() {
      drawAudio7(9);
    }
    void SpMuAudio71() {
      drawAudio7(10);
    }
    void SpMuAudio72() {
      drawAudio7(11);
    }
    void SpMuAudio73() {
      drawAudio7(12);
    }
    void SpMuAudio74() {
      drawAudio7(13);
    }
    void SpMuAudio75() {
      drawAudio7(14);
    }


    void drawMode1(int x1, int x2, int x3, int y1, int y2, int y3, uint16_t color, uint16_t color0, int md) {
      switch(md) {
        case 0 :
        effects.fillTriangle(CENTRE_X, CENTRE_Y, x1, y1, x2, y2, color);
        effects.drawTriangle(CENTRE_X, CENTRE_Y, x1, y1, x2, y2, color0);
        break;
        case 1 :
        effects.fillTriangle(CENTRE_X, CENTRE_Y, x1, y1, x2, y2, color);
        break;
        case 2 :
        effects.fillTriangle(CENTRE_X, CENTRE_Y, x2, y2, x3, y3, color);
        effects.drawTriangle(CENTRE_X, CENTRE_Y, x2, y2, x3, y3, color0);
        break;
        case 3 :
        effects.fillTriangle(CENTRE_X, CENTRE_Y, x1, y1, x2, y2, color);
        effects.drawTriangle(CENTRE_X, CENTRE_Y, x1, y1, x2, y2, color0);
        effects.fillTriangle(CENTRE_X, CENTRE_Y, x1, y1, x1, y2, color);
        effects.drawTriangle(CENTRE_X, CENTRE_Y, x1, y1, x1, y2, color0);
        break;
        case 4 :
        effects.drawTriangle(CENTRE_X, CENTRE_Y, x2, y2, x3, y3, color);
        break;
        case 5 :
        effects.drawTriangle(CENTRE_X, CENTRE_Y, x1, y1, x2, y2, color0);
        break;
        case 6 :
        effects.fillTriangle(x1, y1, x2, y2, x3, y3, color);
        effects.drawTriangle(x1, y1, x2, y2, x3, y3, color0);
        break;
        case 7 :
        effects.fillTriangle(x1, y1, x2, y2, x3, y3, color);
        effects.fillTriangle(x1, y1, x1, y2, x3, y3, color);
        break;
        case 8 :
        effects.fillTriangle(x2, y1, x2, y2, x2, y3, color);
        effects.fillTriangle(x3, y1, x3, y2, x3, y3, color0);
        break;
        case 9 :
        effects.fillTriangle(x3, y1, x3, y2, x1, y3, color);
        effects.drawTriangle(x3, y1, x3, y2, x1, y3, color0);
        break;
        case 10 :
        effects.fillTriangle(x2, y1, x3, y1, x2, y3, color);
        effects.drawTriangle(x2, y1, x3, y1, x2, y3, color0);
        break;
        case 11 :
        effects.drawLine(x1, y1, x2, y2, color);
        effects.drawLine(x1, y1, x3, y3, color0);
        break;
        case 12 :
        effects.drawLine(x1, y1, x2, y2, color);
        effects.drawLine(x2, y2, x3, y3, color0);
        break;
        case 13 :
        effects.drawLine(x1, y1, x1, y2, color);
        effects.drawLine(x1, y2, x2, y2, color0);
        effects.drawLine(x1, y1, x3, y1, color);
        effects.drawLine(x3, y1, x3, y3, color0);
        break;
      }
    }

    void drawMode2(int x1, int x2, int y1, int y2, uint16_t color, uint16_t color0, int md) {
      switch(md) {
        case 0 :
        effects.fillTriangle(CENTRE_X, 31, x1, y1, x2, y2, color);
        effects.drawTriangle(CENTRE_X, 31, x1, y1, x2, y2, color0);
        break;
        case 1 :
        effects.fillTriangle(CENTRE_X, 31, x1, y1, x2, y2, color);
        break;
        case 2 :
        effects.fillTriangle(x1, y1, x2, y2, x1, y2, color);
        effects.fillTriangle(x1, y1, x2, y2, x2, y1, color);
        break;
        case 3 :
        effects.fillTriangle(CENTRE_X, CENTRE_Y, x1, y1, x2, y2, color);
        break;
        case 4 :
        effects.fillTriangle(CENTRE_X, CENTRE_Y, x1, y1, x2, y2, color);
        effects.drawTriangle(CENTRE_X, CENTRE_Y, x1, y1, x2, y2, color0);
        break;
        case 5 :
        effects.fillTriangle(x1, y1, x2, y2, x1, y2, color);
        break;
        case 6 :
        effects.fillTriangle(x1, y1, x2, y2, x2, y1, color);
        break;
        case 7 :
        effects.drawLine(x1, y1, x2, y1, color);
        effects.drawLine(x1, y1, x1, y2, color0);
        effects.drawLine(x2, y2, x1, y2, color);
        effects.drawLine(x2, y2, x2, y1, color0);
        break;
        case 8 :
        effects.drawLine(x1, y1, x2, y2, color);
        break;
        case 9 :
        effects.drawLine(x1, y1, x1, y2, color);
        effects.drawLine(x2, y2, x1, y2, color0);
        break;
        case 10 :
        effects.fillTriangle(x1, y1, x1, y2, x2, y1, color);
        effects.fillTriangle(x2, y2, x2, y1, x1, y2, color0);
        break;
        case 11 :
        effects.fillTriangle(x1, y1, x1, y2, x2, y1, color);
        break;
        case 12 :
        effects.fillTriangle(x2, y2, x2, y1, x1, y2, color);
        break;
      }
    }

    void drawMode3(int x1, int x2, int x3, int y1, int y2, int y3, uint16_t color, uint16_t color0, int md) {
      switch(md) {
        case 0 :
        effects.fillTriangle(CENTRE_X, 31, x1, y1, x2, y2, color);
        effects.drawTriangle(CENTRE_X, 31, x1, y1, x2, y2, color0);
        break;
        case 1 :
        effects.fillTriangle(CENTRE_X, 31, x1, y1, x2, y2, color);
        break;
        case 2 :
        effects.fillTriangle(CENTRE_X, 31, x1, y1, x2, y2, color);
        effects.drawTriangle(CENTRE_X, 31, x1, y1, x2, y2, color0);
        effects.fillTriangle(CENTRE_X, 31, x1, y1, x1, y2, color);
        effects.drawTriangle(CENTRE_X, 31, x1, y1, x1, y2, color0);
        break;
        case 3 :
        effects.fillTriangle(CENTRE_X, 31, x1, y1, x2, y2, color);
        effects.fillTriangle(CENTRE_X, 31, x2, y2, x3, y3, color0);
        break;
        case 4 :
        effects.fillTriangle(CENTRE_X, 31, x2, y2, x3, y3, color);
        effects.drawTriangle(CENTRE_X, 31, x2, y2, x3, y3, color0);
        break;
        case 5 :
        effects.drawTriangle(CENTRE_X, 31, x2, y2, x3, y3, color);
        break;
        case 6 :
        effects.drawLine(x2, y2, x1, y1, color);
        effects.drawLine(x1, y1, x3, y3, color);
        break;
        case 7 :
        effects.drawLine(x2, y2, x3, y3, color);
        break;
        case 8 :
        effects.drawLine(x2, y2, x3, y3, color);
        effects.drawLine(x1, y2, x3, y3, color);
        break;
        case 9 :
        effects.fillTriangle(x1, y1, x2, y2, x2, y1, color);
        effects.fillTriangle(x1, y1, x3, y3, x3, y1, color);
        effects.drawTriangle(x1, y1, x2, y2, x2, y1, color0);
        effects.drawTriangle(x1, y1, x3, y3, x3, y1, color0);
        break;
        case 10 :
        effects.fillTriangle(x3, y3, x3, y2, x2, y3, color);
        effects.fillTriangle(x2, y2, x2, y3, x3, y2, color);
        break;
      }
    }

    void drawMode4(int x1, int x2, int x3, int y1, int y2, int y3, uint16_t color, uint16_t color0, int md) {
      switch(md) {
        case 0 :
        effects.fillTriangle(CENTRE_X, 0, x1, y1, x2, y2, color);
        effects.drawTriangle(CENTRE_X, 0, x1, y1, x2, y2, color0);
        break;
        case 1 :
        effects.fillTriangle(CENTRE_X, 0, x1, y1, x2, y2, color);
        break;
        case 2 :
        effects.fillTriangle(CENTRE_X, 0, x1, y1, x2, y2, color);
        effects.drawTriangle(CENTRE_X, 0, x1, y1, x2, y2, color0);
        effects.fillTriangle(CENTRE_X, 0, x1, y1, x1, y2, color);
        effects.drawTriangle(CENTRE_X, 0, x1, y1, x1, y2, color0);
        break;
        case 3 :
        effects.fillTriangle(CENTRE_X, 0, x1, y1, x2, y2, color);
        effects.fillTriangle(CENTRE_X, 0, x2, y2, x3, y3, color0);
        break;
        case 4 :
        effects.fillTriangle(CENTRE_X, 0, x2, y2, x3, y3, color);
        effects.drawTriangle(CENTRE_X, 0, x2, y2, x3, y3, color0);
        break;
        case 5 :
        effects.drawTriangle(CENTRE_X, 0, x2, y2, x3, y3, color);
        break;
        case 6 :
        effects.drawLine(x2, y2, x1, y1, color);
        effects.drawLine(x1, y1, x3, y3, color);
        break;
        case 7 :
        effects.drawLine(x2, y2, x3, y3, color);
        break;
        case 8 :
        effects.drawLine(x2, y2, x3, y3, color);
        effects.drawLine(x1, y2, x3, y3, color);
        break;
        case 9 :
        effects.fillTriangle(x1, y1, x2, y2, x2, y1, color);
        effects.fillTriangle(x1, y1, x3, y3, x3, y1, color);
        effects.drawTriangle(x1, y1, x2, y2, x2, y1, color0);
        effects.drawTriangle(x1, y1, x3, y3, x3, y1, color0);
        break;
        case 10 :
        effects.fillTriangle(x3, y3, x3, y2, x2, y3, color);
        effects.fillTriangle(x2, y2, x2, y3, x3, y2, color);
        break;
      }
    }

    void drawMode5(int x1, int x2, int y1, int y2, uint16_t color, uint16_t color0, int md) {
      switch(md) {
        case 0 :
        effects.fillTriangle(CENTRE_X, 31, x1, y1, x2, y2, color);
        effects.drawTriangle(CENTRE_X, 31, x1, y1, x2, y2, color0);
        break;
        case 1 :
        effects.fillTriangle(CENTRE_X, 31, x1, y1, x2, y2, color);
        break;
        case 2 :
        effects.fillTriangle(x1, y1, x2, y2, x1, y2, color);
        effects.fillTriangle(x1, y1, x2, y2, x2, y1, color);
        break;
        case 3 :
        effects.fillTriangle(CENTRE_X, CENTRE_Y, x1, y1, x2, y2, color);
        break;
        case 4 :
        effects.fillTriangle(CENTRE_X, CENTRE_Y, x1, y1, x2, y2, color);
        effects.drawTriangle(CENTRE_X, CENTRE_Y, x1, y1, x2, y2, color0);
        break;
        case 5 :
        effects.fillTriangle(x1, y1, x2, y2, x1, y2, color);
        break;
        case 6 :
        effects.fillTriangle(x1, y1, x2, y2, x2, y1, color);
        break;
        case 7 :
        effects.drawLine(x1, y1, x2, y1, color);
        effects.drawLine(x1, y1, x1, y2, color0);
        effects.drawLine(x2, y2, x1, y2, color);
        effects.drawLine(x2, y2, x2, y1, color0);
        break;
        case 8 :
        effects.drawLine(x1, y1, x2, y2, color);
        break;
        case 9 :
        effects.drawLine(x1, y1, x1, y2, color);
        effects.drawLine(x2, y2, x1, y2, color0);
        break;
        case 10 :
        effects.fillTriangle(x1, y1, x1, y2, x2, y1, color);
        effects.fillTriangle(x2, y2, x2, y1, x1, y2, color0);
        break;
        case 11 :
        effects.fillTriangle(x1, y1, x1, 31, x2, 31, color);
        effects.fillTriangle(x2, y2, x2, 31, x1, 31, color);
        break;
        case 12 :
        effects.fillTriangle(x1, y1, x2, y2, x1, 31, color);
        effects.fillTriangle(x1, y1, x2, y2, x2, 31, color);
        break;
        case 13 :
        effects.fillRect(x1, y1, x2-x1, 31-((y1+y2)/2), color);
        break;
        case 14 :
        int w = (x2-x1)/2;
        effects.fillRect(x1, y1, w, 31-y1, color);
        effects.fillRect(x1+w, y2, w, 31-y2, color0);
        break;
      }
    }

    void drawAudio1(int mod) {
      float degreesPerLine = 360 / bandCount;
      float angle = totalevels*2;
      for (int band = 0; band < bandCount; band++) {
        int level = levels[band]/2;
        int nextLevel = levels[band + 1]/2;
        if (band == 15) nextLevel = levels[0]/2;
        uint16_t color1 = MyColor[barcolor[band]];
        uint16_t color2 = MyColor[barcolor[(band+1)%16]];
        float radians = radians(angle);
        int x1 = CENTRE_X + level * 2  * sin(radians);
        int y1 = CENTRE_Y + level * cos(radians);
        radians = radians(angle - degreesPerLine/2);
        int x2 = CENTRE_X + level * 2 * sin(radians);
        int y2 = CENTRE_Y + level * cos(radians);
        radians = radians(angle + degreesPerLine/2);
        int x3 = CENTRE_X + nextLevel * 2 * sin(radians);
        int y3 = CENTRE_Y + nextLevel * cos(radians);
        drawMode1(x1, x2, x3, y1, y2, y3, color1, color2, mod);
        angle += degreesPerLine;
      }
    }

    void drawAudio2(int mod) {
      float degreesPerLine = 180 / bandCount;
      float angle = degreesPerLine - 90;
      for (int band = 0; band < bandCount; band++) {
        int level = levels[band];
        int nextLevel = levels[band + 1];
        if (band == 15) nextLevel = levels[0];
        uint16_t color1 = MyColor[barcolor[band]];
        uint16_t color2 = MyColor[barcolor[(band+1)%16]];
        float radians = radians(angle - degreesPerLine);
        int x1 = CENTRE_X + level * sin(radians);
        int y1 = 31 - level * cos(radians);
        radians = radians(angle);
        int x2 = CENTRE_X + nextLevel * sin(radians);
        int y2 = 31 - nextLevel * cos(radians);
        drawMode2(x1, x2, y1, y2, color1, color2, mod);
        angle += degreesPerLine;
      }
    }

    void drawAudio3(int mod) {
      float degreesPerLine = 180 / bandCount;
      float angle = totalevels;
      for (int band = 0; band < bandCount; band++) {
        angle = (angle>90) ? (angle-180+degreesPerLine) : angle;
        int level = levels[band];
        int nextLevel = levels[band + 1];
        if (band == 15) nextLevel = levels[0];
        uint16_t color1 = MyColor[barcolor[band]];
        uint16_t color2 = MyColor[barcolor[(band+1)%16]];
        float radians = 135 + radians(angle);
        int x1 = CENTRE_X + level  * sin(radians);
        int y1 = 31 + level * cos(radians);
        radians = 135 + radians(angle + degreesPerLine/2);
        int x2 = CENTRE_X + nextLevel * sin(radians);
        int y2 = 31 + nextLevel * cos(radians);
        radians = 135 + radians(angle - degreesPerLine/2);
        int x3 = CENTRE_X + nextLevel * sin(radians);
        int y3 = 31 + nextLevel * cos(radians);
        drawMode3(x1, x2, x3, y1, y2, y3, color1, color2, mod);
        angle += degreesPerLine;
      }
    }

    void drawAudio4(int mod) {
      float degreesPerLine = 180 / bandCount;
      float angle = totalevels;
      for (int band = 0; band < bandCount; band++) {
        angle = (angle>90) ? (angle-180+degreesPerLine) : angle;
        int level = levels[band];
        int nextLevel = levels[band + 1];
        if (band == 15) nextLevel = levels[0];
        uint16_t color1 = MyColor[barcolor[band]];
        uint16_t color2 = MyColor[barcolor[(band+1)%16]];
        float radians = 270 + radians(angle);
        int x1 = CENTRE_X + level  * sin(radians);
        int y1 = level * cos(radians);
        radians = 270 + radians(angle + degreesPerLine/2);
        int x2 = CENTRE_X + nextLevel * sin(radians);
        int y2 = nextLevel * cos(radians);
        radians = 270 + radians(angle - degreesPerLine/2);
        int x3 = CENTRE_X + nextLevel * sin(radians);
        int y3 = nextLevel * cos(radians);
        drawMode4(x1, x2, x3, y1, y2, y3, color1, color2, mod);
        angle += degreesPerLine;
      }
    }

    void drawAudio5(int mod) {
      float degreesPerLine = 180 / bandCount;
      float angle = totalevels;
      for (int band = 0; band < bandCount; band++) {
        angle = (angle>90) ? (angle-180+degreesPerLine) : angle;
        int level = levels[band]/2;
        int nextLevel = levels[band + 1]/2;
        if (band == 15) nextLevel = levels[0]/2;
        uint16_t color1 = MyColor[barcolor[band]];
        uint16_t color2 = MyColor[barcolor[(band+1)%16]];
        float radians = 135 + radians(angle);
        int x1 = CENTRE_X + level * 2 * sin(radians);
        int y1 = 31 + level * cos(radians);
        radians = 135 + radians(angle + degreesPerLine/2);
        int x2 = CENTRE_X + nextLevel * 2 * sin(radians);
        int y2 = 31 + nextLevel * cos(radians);
        radians = 135 + radians(angle - degreesPerLine/2);
        int x3 = CENTRE_X + nextLevel * 2 * sin(radians);
        int y3 = 31 + nextLevel * cos(radians);
        drawMode3(x1, x2, x3, y1, y2, y3, color1, color2, mod);
        angle += degreesPerLine;
      }
    }

    void drawAudio6(int mod) {
      float degreesPerLine = 180 / bandCount;
      float angle = totalevels;
      for (int band = 0; band < bandCount; band++) {
        angle = (angle>90) ? (angle-180+degreesPerLine) : angle;
        int level = levels[band]/2;
        int nextLevel = levels[band + 1]/2;
        if (band == 15) nextLevel = levels[0]/2;
        uint16_t color1 = MyColor[barcolor[band]];
        uint16_t color2 = MyColor[barcolor[(band+1)%16]];
        float radians = 270 + radians(angle);
        int x1 = CENTRE_X + level * 2 * sin(radians);
        int y1 = level * cos(radians);
        radians = 270 + radians(angle + degreesPerLine/2);
        int x2 = CENTRE_X + nextLevel * 2 * sin(radians);
        int y2 = nextLevel * cos(radians);
        radians = 270 + radians(angle - degreesPerLine/2);
        int x3 = CENTRE_X + nextLevel * 2 * sin(radians);
        int y3 = nextLevel * cos(radians);
        drawMode4(x1, x2, x3, y1, y2, y3, color1, color2, mod);
        angle += degreesPerLine;
      }
    }

    void drawAudio7(int mod) {
        int dx = MATRIX_WIDTH / bandCount;
      for (int i = 0; i < bandCount; i++) {
        int level = levels[i];
        int nextLevel = levels[i + 1];
        if (i == 15) nextLevel = levels[0];
        uint16_t color1 = MyColor[barcolor[i]];
        uint16_t color2 = MyColor[barcolor[(i+1)%16]];
        uint8_t y = MATRIX_HEIGHT - level - 1;
        uint8_t nextY = MATRIX_HEIGHT - nextLevel - 1;
        y = y >= MATRIX_HEIGHT ? MATRIX_HEIGHT - 1 : y;
        nextY = nextY >= MATRIX_HEIGHT ? MATRIX_HEIGHT - 1 : nextY;
        int x1 = i * dx, y1 = y;
        int x2 = i * dx + dx, y2 = nextY;
        drawMode5(x1, x2, y1, y2, color1, color1, mod);
      }
    }

    int currentIndex = 0;

    int getCurrentIndex() {
      return currentIndex;
    }

    AudioPatterns() {
      this->currentItem = items[currentIndex];

      // add the items to the shuffledItems array
      for (int a = 0; a < PATTERN_COUNT; a++) {
        shuffledItems[a] = items[a];
      }

      shuffleItems();
    }

    void moveRandom(int step) {
      currentIndex += step;

      if (currentIndex >= PATTERN_COUNT) currentIndex = 0;
      else if (currentIndex < 0) currentIndex = PATTERN_COUNT - 1;


      currentItem = shuffledItems[currentIndex];
    }

    void shuffleItems() {
      for (int a = 0; a < PATTERN_COUNT; a++)
      {
        int r = random(a, PATTERN_COUNT);
        AudioPatternFunctionPointer temp = shuffledItems[a];
        shuffledItems[a] = shuffledItems[r];
        shuffledItems[r] = temp;
      }
    }

    char* Drawable::name = (char *)"Audio Patterns";

    void move(int step) {
      moveTo(currentIndex + step);
    }

    void moveTo(int index) {
      currentIndex = index;

      if (currentIndex >= PATTERN_COUNT) currentIndex = 0;
      else if (currentIndex < 0) currentIndex = PATTERN_COUNT - 1;


      currentItem = items[currentIndex];
      Serial.println(currentIndex);
    }

    unsigned int drawFrame() {
      ReadAudio();
      clear();
      (this->*currentItem)();
      show();
      return 0;
    }
    
    void listAudioPatterns() {
      Serial.println(F("{"));
      Serial.print(F("  \"count\": "));
      Serial.print(PATTERN_COUNT);
      Serial.println(",");
      Serial.println(F("  \"results\": ["));

      for (int i = 0; i < PATTERN_COUNT; i++) {
        Serial.print(F("    \""));
        Serial.print(i);
        if (i == PATTERN_COUNT - 1)
          Serial.println(F("\""));
        else
          Serial.println(F("\","));
      }

      Serial.println("  ]");
      Serial.println("}");
    }

    bool setAudioPattern(String name) {
      for (int i = 0; i < PATTERN_COUNT; i++) {
        if (name.toInt() == i) {
          moveTo(i);
          return true;
        }
      }

      return false;
    }

    bool setAudioPattern(int index) {
      if (index >= PATTERN_COUNT || index < 0)
        return false;

      moveTo(index);

      return true;
    }
};

#endif

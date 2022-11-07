/* REQUIRES the following Arduino libraries:
// - Lien vidéo: https://youtu.be/r_nMU0Glcuo
// - Diagram: https://youtu.be/l33WRd2h6gM
// - GPxMatrix Library: https://github.com/3tawi/GPxMatrix
// - Adafruit_GFX Library: https://github.com/adafruit/Adafruit-GFX-Library
// - arduinoFFT Library: https://github.com/kosme/arduinoFFT
// - Getting Started ESP32 / ESP32S : https://www.youtube.com/watch?v=9b0Txt-yF7E
// Find All "Great Projects" Videos : https://www.youtube.com/c/GreatProjects
*/
#include <WiFi.h>
#include <WebServer.h>
#include <GPxMatrix.h>
#include "SPIFFS.h"
#include "page.h"

#define P_A    32
#define P_B    17
#define P_C    33
#define P_D    16
#define P_CLK  0 
#define P_LAT  2 
#define P_OE   4

GPxMatrix matrix(P_A, P_B, P_C, P_D, P_CLK, P_LAT, P_OE, true, 64);

WebServer server(80);

#define clear()          matrix.fillScreen(0)
#define show()           matrix.swapBuffers(true)
#define MATRIX_HEIGHT 32
#define MATRIX_WIDTH 64
int sp0, sp1, sp2;
bool wifiok = false;
bool wifiapok = false;
bool ModeAuto = true;
int Ci;
String textip;
long lastTime, prevTime; 

uint16_t MyColor[92] = { 0xF800, 0xF880, 0xF900, 0xF980, 0xFA20, 0xFAA0, 0xFB20, 0xFBA0, 0xFC40, 0xFCC0, 0xFD40, 0xFDC0,
                         0xFDC0, 0xFE60, 0xFEE0, 0xFF60, 0xFFE0, 0xEFE0, 0xDFE0, 0xCFE0, 0xBFE0, 0xAFE0, 0x9FE0, 0x8FE0,
                         0x77E0, 0x67E0, 0x57E0, 0x47E0, 0x37E0, 0x27E0, 0x17E0, 0x07E0, 0x07E2, 0x07E4, 0x07E6, 0x07E8,
                         0x07EA, 0x07EC, 0x07EE, 0x07F1, 0x07F3, 0x07F5, 0x07F7, 0x07F9, 0x07FB, 0x07FD, 0x07FF, 0x077F,
                         0x06FF, 0x067F, 0x05DF, 0x055F, 0x04DF, 0x045F, 0x03BF, 0x033F, 0x02BF, 0x023F, 0x019F, 0x011F,
                         0x009F, 0x001F, 0x101F, 0x201F, 0x301F, 0x401F, 0x501F, 0x601F, 0x701F, 0x881F, 0x981F, 0xA81F,
                         0xB81F, 0xC81F, 0xD81F, 0xE81F, 0xF81F, 0xF81D, 0xF81B, 0xF819, 0xF817, 0xF815, 0xF813, 0xF811,
                         0xF80E, 0xF80C, 0xF80A, 0xF808, 0xF806, 0xF804, 0xF802, 0xF800 };

String  Ssid, Pass;
IPAddress ip(192,168,1,31);
IPAddress gateway(192, 168,1,1);
IPAddress gatewayap(192,168,4,1);
IPAddress subnet(255, 255, 255, 0);

#include "AudioLogic.h"
#include "Effects.h"
Effects effects;
#include "Drawable.h"
#include "Playlist.h"
#include "AudioPatterns.h"
AudioPatterns audioPatterns;


void(* resetFunc) (void) = 0;//declare reset function at address 0


void getWifi() {
  char user[30], pasw[30];
  int lengthSsid = Ssid.length() + 1;
  int lengthPass = Pass.length() + 1;
  Ssid.toCharArray(user, lengthSsid);
  Pass.toCharArray(pasw, lengthPass);
  WiFi.config(ip, gateway, subnet);
  WiFi.begin(user, pasw);
  int xc = 0;
    Serial.println(" ");
  while (WiFi.status() != WL_CONNECTED && xc < 10) {
    delay(1000);
    Serial.print(".");
    xc++;
  }
    Serial.println(" ");
  if (WiFi.status() == WL_CONNECTED) { 
    textip = "CONNECTED To: ";
    textip += Ssid;
    textip += " IP Address: http://";
    textip += WiFi.localIP().toString().c_str();
    wifiok = true;
    } else { 
    wifiok = false;
    } 
  Serial.println("");
  Serial.println(textip);
}

void setup() {
  Serial.begin(115200);
  SPIFFS.begin();
  effects.readSttWifi();
  getWifi();
  if (!wifiok) { effects.getAPWifi(); }
  handleserver();
  server.begin();
  matrix.begin();
  sampling_period_us = round(1000000 * (1.0 / SAMPLING_FREQ));
  effects.readSttspeed();
  listAudioPatterns();
  setAudioPattern(Ci); 
  audioPatterns.start();
}

void loop() {
  server.handleClient(); 
  if(millis() - lastTime >= sp0) {
    audioPatterns.drawFrame();
    lastTime = millis();
  }
  if(millis() - prevTime >= sp2 && ModeAuto) {
    audioPatterns.stop();
    audioPatterns.move(1);
    audioPatterns.start();
    prevTime = millis();
  }
}

void listAudioPatterns() {
  audioPatterns.listAudioPatterns();
}

bool setAudioPattern(String name) {
  if (audioPatterns.setAudioPattern(name)) {
    return true;
  }
  return false;
}

bool setAudioPattern(int index) {
  if (audioPatterns.setAudioPattern(index)) {
    return true;
  }
  return false;
}

void handleRestesp() {  
    handleRoot();
    delay(4000);     
    resetFunc();
}
void handleRoot() {
 server.send(200, "text/html", MAIN_page); //Send web page
}

void handleSpe0() {
    handleRoot();
    sp0 = server.arg("Speed0").toInt();
    effects.SaveStting();
}
void handleSpe1() {
    handleRoot();
    sp1 = server.arg("Speed1").toInt();
    sp1 *= 10;
    effects.SaveStting();
}
void handleSpe2() {
    handleRoot();
    sp2 = server.arg("Speed2").toInt();
    sp2 *= 1000;
    effects.SaveStting();
}

void handleModeAuto() {
    ModeAuto = !ModeAuto;
    handleRoot();
    effects.SaveStting();
}
void handleModePre() { 
  handleRoot();
  audioPatterns.stop();
  audioPatterns.move(-1);
  audioPatterns.start();
  Ci = audioPatterns.getCurrentIndex();
  effects.SaveStting();
}
void handleModeNex() {
  handleRoot(); 
  audioPatterns.stop();
  audioPatterns.move(1);
  audioPatterns.start();
  Ci = audioPatterns.getCurrentIndex();
  effects.SaveStting();
}
void handleModePat() { 
  handleRoot();
  Ci = server.arg("Pattern").toInt();
  Ci -= 1;
  audioPatterns.stop();
  setAudioPattern(Ci);
  audioPatterns.start();
  effects.SaveStting();
}

void handleWifi() {  
  handleRoot();
  wifiapok = false;
  Ssid = server.arg("usname");
  Pass = server.arg("pssw");
  getWifi();
  effects.Savewifi();
  if (!wifiok) { effects.getAPWifi(); } 
}
void handleserver() {
  server.on("/", handleRoot);
  server.on("/mySpeed0", handleSpe0);
  server.on("/mySpeed1", handleSpe1);
  server.on("/mySpeed2", handleSpe2);
  server.on("/modepre", handleModePre);
  server.on("/modenex", handleModeNex);
  server.on("/modeauto", handleModeAuto);
  server.on("/modepat", handleModePat);
  server.on("/readstat", handlestate);
  server.on("/mywifi", handleWifi);
  server.on("/restesp", handleRestesp);
  server.begin();
}
void handlestate() {
  String content = "<?xml version = \"1.0\" ?>";
  content += "<inputs><analog>";
  content += sp0;
  content += "</analog><analog>";
  content += sp1;
  content += "</analog><analog>";
  content += sp2;
  content += "</analog><analog>";
  content += Ci+1;
  content += "</analog><analog>";
  content += ModeAuto;
  content += "</analog></inputs>";
  server.sendHeader("Cache-Control", "no-cache");
  server.send(200, "text/xml", content); //Send web page
}

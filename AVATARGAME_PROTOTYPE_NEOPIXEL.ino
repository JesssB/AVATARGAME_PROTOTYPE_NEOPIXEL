#include <Adafruit_NeoPixel.h>
#define PIN 6
#define ledCount 4

Adafruit_NeoPixel strip = Adafruit_NeoPixel(ledCount, PIN, NEO_GRB + NEO_KHZ800);

char val; // Data received from the serial port
 
 void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
  strip.begin();
  strip.show(); 
}

void loop() {
if (Serial.available()) { // If data is available to read,
 val = Serial.read(); // read it and store it in val
 }

 //////////ATTACK////////////
 
 if (val == 'Q') { // If H was received
  strip.setPixelColor(0, strip.Color(255, 0, 0));
  strip.setBrightness(30);
  strip.show();
 } else if (val == 'W'){
  strip.setPixelColor(1, strip.Color(255, 0, 0));
  strip.setBrightness(30);
  strip.show();
 }else if (val == 'E'){
  strip.setPixelColor(2, strip.Color(255, 0, 0));
  strip.setBrightness(30);
  strip.show();
 }else if (val == 'R'){
  strip.setPixelColor(3, strip.Color(255, 0, 0));
  strip.setBrightness(30);
  strip.show();
 }

 ///////////DEFENCE//////////////
 
 if (val == 'A') { // If H was received
  strip.setPixelColor(0, strip.Color(0, 255, 0));
  strip.setBrightness(30);
  strip.show();
 } else if (val == 'S'){
  strip.setPixelColor(1, strip.Color(0, 255, 0));
  strip.setBrightness(30);
  strip.show();
 }else if (val == 'D'){
  strip.setPixelColor(2, strip.Color(0, 255, 0));
  strip.setBrightness(30);
  strip.show();
 }else if (val == 'F'){
  strip.setPixelColor(3, strip.Color(0, 255, 0));
  strip.setBrightness(30);
  strip.show();
 }else if (val == 'P'){
  clearAll();
 }
 delay(100); // Wait 100 milliseconds for next reading
 }

 void clearAll(){
  for(int i = 0; i<ledCount; i++){
    strip.setPixelColor(i, 0, 0, 0);
  }
  strip.show();
  delay(30);
}



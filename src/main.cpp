#include <Arduino.h>
#include <NewPing.h>
#include <ToneAC.h>

#define TONE_PIN      9
#define TONE_VOLUME   1
#define TRIGGER_PIN   12   
#define ECHO_PIN      11   
#define MAX_DISTANCE  200  

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); 

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(30); 
  unsigned long uS = sonar.ping(); 
    
  if (1 < uS && uS < 3000) { 
    int freq = 2000 - uS / 2;
    toneAC(freq, TONE_VOLUME);
    Serial.println(freq);
} else {
    toneAC(0); 
  }
}

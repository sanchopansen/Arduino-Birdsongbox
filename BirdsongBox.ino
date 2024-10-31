#include <LowPower.h>
#include <DFPlayerMini_Fast.h>
#include "SoftwareSerial.h"

const int speakervol = 20; //Set volume value. From 0 to 30
const int RXpin = 7;
const int TXpin = 6;
const int LDR_PIN = A1; //Analog Pin for LDR Sensor
const int BRT_THR = 750; //Brightness Threshold from LDR Sensor -> low value = brighter environment

SoftwareSerial mySerial(RXpin,TXpin); // RX, TX
DFPlayerMini_Fast myMP3;

void setup() {
  // put your setup code here, to run once:
  mySerial.begin(9600);
  Serial.begin(9600);
  myMP3.begin(mySerial, false); //debugging true or false
  delay(1000);
  myMP3.volume(speakervol);

}

//Wie soll das Programm funktionieren?
 //Wache alle 8s auf und checke ldr-wert
    //wenn wert:
        //wenn isplaying()=false
            //dann spiele random track
            //schlafe für ??? Sekunden (solange, bis Trakc fertig (längster Track geht 1:46))
            //oder pauschal schlafe für 2 Minuten

void loop() {
  // put your main code here, to run repeatedly:
  float LDR_VAL = analogRead(LDR_PIN);
  if (LDR_VAL < BRT_THR) {
    //Serial.print("LDR Value is: ");
    Serial.println(LDR_VAL);
    //Serial.print(" Wecke MP3 PLayer auf!");
    myMP3.wakeUp();
    Serial.print(myMP3.isPlaying());
    if (myMP3.isPlaying() == false) {
      LowPower.powerDown(SLEEP_4S, ADC_OFF, BOD_OFF);
      ///Serial.print("Spiele random Track und leg Arduino schlafen für 2 Min.");
      myMP3.randomAll();
      sleepForSeconds(120);
      //Serial.print("Leg MP3 Player schlafen");
      myMP3.sleep();
    }
  }
  else {
    //Serial.print("LDR Value is: ");
    //Serial.print(LDR_VAL);
    //Serial.println(". Zu dunkel...");
    myMP3.stop();
    myMP3.sleep();
  }
  LowPower.powerDown(SLEEP_8S, ADC_OFF, BOD_OFF); 
}

void sleepForSeconds(int seconds) {
  int cycles = seconds / 8;
  for (int i = 0; i < cycles; i++) {
    LowPower.powerDown(SLEEP_8S, ADC_OFF, BOD_OFF);
  }
}

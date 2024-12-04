#include <LowPower.h>
#include <DFPlayerMini_Fast.h>
#include "SoftwareSerial.h"
#include <avr/sleep.h>
#include <avr/interrupt.h>

const int lightPin = 2;  // Connect DO pin of LM393 to digital pin 2
const int speakervol = 9; // Set volume value. From 0 to 30
const int RXpin = 7;
const int TXpin = 6;

volatile bool shouldPlayTrack = false;  // Flag to indicate if a track should be played
bool previousLightState = HIGH;  // Track the previous light state (HIGH = Light OFF)

SoftwareSerial mySerial(RXpin, TXpin); // RX, TX
DFPlayerMini_Fast myMP3;

void setup() {
  pinMode(lightPin, INPUT);  // Set the light pin as input
  attachInterrupt(digitalPinToInterrupt(lightPin), wakeUp, FALLING);  // Trigger on falling edge (dark to bright)
  Serial.begin(9600);  // Start serial communication for debugging
  mySerial.begin(9600);
  myMP3.begin(mySerial, false);  // Debugging true or false
  delay(1000);
  myMP3.volume(speakervol);  //Set
}

void loop() {
  // Enter sleep mode
  sleepNow();

  if (shouldPlayTrack) {
    // Play one track only when light turns ON
    delay(5000); //Wait before start playback
    playTrack();
    shouldPlayTrack = false;  // Reset the flag after playing the track
  }

  // Re-check light status to avoid unintended playback
  bool currentLightState = digitalRead(lightPin);
  if (previousLightState == HIGH && currentLightState == LOW) {
    // Light just turned ON (dark to bright), allow track playback
    previousLightState = LOW;
  } else if (previousLightState == LOW && currentLightState == HIGH) {
    // Light just turned OFF (bright to dark), prepare for next detection
    previousLightState = HIGH;
  }
}

void playTrack() {
  //Serial.println("Woken up by light detection!");
  delay(2000);  // delay for initialization

  myMP3.wakeUp();
  //Serial.println("Playing a track...");
  int randomTrack = random(1, myMP3.numSdTracks() + 1);  // Select a random track
  myMP3.play(randomTrack);

  // Sleep in intervals while the track is playing
  while (myMP3.isPlaying()) {
    LowPower.powerDown(SLEEP_8S, ADC_OFF, BOD_OFF);  // Sleep for 8 seconds
  }

  //Serial.println("Track finished!");
  myMP3.stop();
  myMP3.sleep();
}

void sleepNow() {
  set_sleep_mode(SLEEP_MODE_PWR_DOWN);  // Set sleep mode to Power Down
  sleep_enable();                       // Enable sleep mode
  sleep_mode();                         // Enter sleep mode
  sleep_disable();                      // Disable sleep after waking up
}

void wakeUp() {
  // Only set the flag to play a track if the light turned ON (FALLING edge)
  if (digitalRead(lightPin) == LOW) {  // Light is ON (LOW)
    shouldPlayTrack = true;
  }
}

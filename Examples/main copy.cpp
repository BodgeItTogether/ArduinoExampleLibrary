/*

*/

#include <Arduino.h>
#define onboard 13

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
  Serial.println("in setup()");
  
  int i = 1;
  i++;
}

// the loop function runs over and over again forever
void loop() {
  //Serial.println("in loop(), in");
  digitalWrite(onboard, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(100);                      // wait for a second
  digitalWrite(onboard, LOW);   // turn the LED off by making the voltage LOW
  delay(100);                      // wait for a second
  // read analog pin 4 and print to serial
  Serial.println(analogRead(4));
}
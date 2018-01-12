/*
================================================================================================
Traffic Light Blink - traffic-lights-blink.ino
================================================================================================
This project turns on an LED for one 10 seconds, then off for one second, repeatly. The Traffic
Light Blink contains 3 x LEDs, 3 x 220ohms, wires and pins are at 3, 4, and 5.  

@package        Traffic Lights (Blink)
@copyright      Copyright (C) 2018. Benjamin Lu
@license        GNU General Public License v2 or later (http://www.gnu.org/licenses/gpl-2.0.html)
@author         Benjamin Lu (https://www.benjlu.com/)
================================================================================================
*/

/*
================================================================================================
Table of Content
================================================================================================
 1.0 - Variables
 2.0 - Setup
 3.0 - Loop
================================================================================================
*/

/*
================================================================================================
Table of Content
================================================================================================
 1.0 - Variables
 2.0 - Setup
 3.0 - Loop
================================================================================================
*/
int redLED = 3;
int yellowLED = 4;
int greenLED = 5;

/*
================================================================================================
 2.0 - Setup
================================================================================================
The Setup functions runs once when you press reset or power to the board.
================================================================================================
*/
void setup() {
  // Initialize Pin 3 for Red LED as Output.
  pinMode(redLED, OUTPUT);

  // Initialize Pin 4 for Yellow LED as Output.
  pinMode(yellowLED, OUTPUT);

  // Initialize Pin 5 for Green LED as Output.
  pinMode(greenLED, OUTPUT);

}

/*
================================================================================================
 3.0 - Loop
================================================================================================
The Loop function runs over and over again repeatly.
================================================================================================
*/
void loop() {
  // Turns on Red LED to High for 10 Seconds.
  digitalWrite(redLED, HIGH);
  delay(10000);

  // Turns off Red LED to Low for 1 Second.
  digitalWrite(redLED, LOW);
  delay(1000);

  // Turns on Yellow LED to High for 10 Seconds.
  digitalWrite(yellowLED, HIGH);
  delay(10000);

  // Turns off Yellow LED to Low for 1 Second.
  digitalWrite(yellowLED, LOW);
  delay(1000);

  // Turns on Green LED to for 10 Seconds.
  digitalWrite(greenLED, HIGH);
  delay(10000);

  // Turns off Green LED to 1 Second.
  digitalWrite(greenLED, LOW);
  delay(1000);
}

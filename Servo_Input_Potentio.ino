#include<Servo.h>;          // Loading servo library.
int pos=0;                  // Declare and initialize the pos variable.
int servoPin=9;             // Tell arduino that servo is hooked to pin 9
int servoDelay=25;          // Declare a variable for a delay between movement.
int potReading;             // Decalre variable for the potentiometer
int PotPin=A0;              // Connect potentiometer to A0


Servo myPointer;            // Create a Servo object called myPointer

void setup() {

  Serial.begin(9600);
  myPointer.attach(servoPin);   // Tell to Arduino that the servo myPointer is attached to the Pin 9.

}

void loop() {
potReading = analogRead(PotPin);  // Read Potentiometer

pos = (155./1023.)*potReading + 15;    // Calculate pos
myPointer.write(pos);                  // Write pos to Servo
}

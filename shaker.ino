/*
 * Shake something.
 * Periodically moves a servo from one side to the other.
*/
#include <Wire.h>

#include <Servo.h>


const uint8_t servoPin = D4; 
Servo servo;

void setup() {
  Serial.begin(115200);
  Serial.println("Starting");


  servo.attach(servoPin);
  servo.write(0);

}


int minv = 10;
int maxv = 170;

void loop() {

    for(int i=minv; i<maxv; i+=2) {
    servo.write(i);
    delay(1);
    }
     
         delay(45000);
         for(int i=maxv; i>=minv; i-=2) {
    servo.write(i);
    delay(1);
    }
    delay(45000);
}

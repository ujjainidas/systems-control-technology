#include <Adafruit_MotorShield.h>
#include "utility/Adafruit_MS_PWMServoDriver.h"

Adafruit_MotorShield AFMS = Adafruit_MotorShield();
Adafruit_DCMotor *myMotor = AFMS.getMotor(2);

void setup() 
{
  AFMS.begin();

}

void loop() 
{
  // put your main code here, to run repeatedly:
  myMotor->setSpeed(250);
  myMotor->run(FORWARD);
}

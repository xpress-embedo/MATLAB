#include <Servo.h>

#define SERVO_PIN  8u
Servo myServo;
void setup()
{
  Serial.begin(9600);
  myServo.attach(SERVO_PIN);
  delay(15);
  myServo.write(0);
  delay(15);
}

void loop()
{
  if( Serial.available() )
  {
    uint8_t value = Serial.read();
    // Serial.write(value);
    myServo.write(value);
    delay(15);
  }
}


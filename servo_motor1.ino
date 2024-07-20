#include <Servo.h>
  
  Servo servo1;
   Servo servo2;
   Servo servo3;
   Servo servo4;
   Servo servo5;
   Servo servo6;

void setup()
{
  Serial.begin(9600);
 Servo1.attach(2);
  Servo2.attach(3);
  Servo3.attach(4);
  Servo4.attach(5);
  Servo5.attach(6);
  Servo6.attach(7);
   
  
}

void loop()
{
  for (int angle = 0; angle <= 180; angle++)
  {
  Servo1.Write(angle);
  Servo2.Write(angle);
  Servo3.Write(angle);
  Servo4.Write(angle);
  Servo5.Write(angle);
  Servo6.Write(angle);
  }
  
  for (int angle = 180; angle >= 0; angle--)
  {
  Servo1.Write(angle);
  Servo2.Write(angle);
  Servo3.Write(angle);
  Servo4.Write(angle);
  Servo5.Write(angle);
  Servo6.Write(angle);
  delay(15)
  }
    
}
#include "ir_lib.h"

void ir_sensor::IR_sensor(int IR, int led)
{
  pinMode(IR,INPUT);
  pinMode(led,OUTPUT);
  _IR = IR;
  _led = led;
}

void ir_sensor::ReadValue_IR()
{
  int ValueRMS = digitalRead(_IR); //nhan gia tri doc duoc la 0 hay 1

  if(ValueRMS == 1)
  {
    digitalWrite(_led, LOW);
  }
  else
  {
    digitalWrite(_led,HIGH);
  }
}

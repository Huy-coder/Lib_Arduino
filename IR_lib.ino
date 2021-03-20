#include "ir_lib.h"
ir_sensor ir1; //replace ir_sensor lib = ir1


void setup() {
  Serial.begin(9600);
  
}

void loop() {
  ir1.IR_sensor(A1,13);
  ir1.ReadValue_IR();
}

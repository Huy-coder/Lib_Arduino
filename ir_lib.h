#ifndef ir_lib_H
#define ir_lib_H
#include "arduino.h"

class ir_sensor
{
  public:
    void IR_sensor(int IR, int led);
    void ReadValue_IR(void);
    int _IR;
    int _led;
};



#endif

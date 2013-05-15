#include "definitions.h"

//Setup defaults to the mouse
void setup()
{
  //Mouse defaults
  setup_mouse();
  
  Serial.begin(9600);
}

void loop()
{
  int val = getValue(IR_FORWARD_LEFT);
  setEmitter(EMITTER_DIAG_SIDE, HIGH);
  
  Serial.print(val);
  Serial.print(" ");
  
  delay(50);
  
}

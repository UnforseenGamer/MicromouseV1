/* Get IR Value */
int getValue(int pin)
{
  return analogRead(pin);
}

/* Set Emitter */
void setEmitter(int pin, int value)
{
  digitalWrite(pin, value);
}

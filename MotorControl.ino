//Function that apply speed control to specific motor
void updateMotor(int motA, int motB, int control, int value)
{
  //Default motor direction
  boolean direct = false;
  
  //Flip direction if negative speed
  if(value < 0)
  {
    direct = !direct;
  }
  
  //Update Motor
  digitalWrite(motA, direct);
  digitalWrite(motB, !direct);
  analogWrite(control, value);
}

/* Function that simplifies drive control to two variables */
void setMotors(int left, int right)
{
  updateMotor(MOTOR_LEFT_A, MOTOR_LEFT_B, MOTOR_CONTROL_LEFT, left);
  updateMotor(MOTOR_RIGHT_A, MOTOR_RIGHT_B, MOTOR_CONTROL_RIGHT, right);
}

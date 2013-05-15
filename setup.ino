/* Function that sets defaults for the mouse */
void setup_mouse()
{
  //Assign all motors as output
  pinMode(MOTOR_LEFT_A, OUTPUT);
  pinMode(MOTOR_LEFT_B, OUTPUT);
  pinMode(MOTOR_RIGHT_A, OUTPUT);
  pinMode(MOTOR_RIGHT_B, OUTPUT);
  
  //Assign Motor speed control pins
  pinMode(MOTOR_CONTROL_LEFT, OUTPUT);
  pinMode(MOTOR_CONTROL_RIGHT, OUTPUT);
  
  //Assign Encoders as inputs
  pinMode(ENCODER_LEFT_A, INPUT);
  pinMode(ENCODER_LEFT_B, INPUT);
  pinMode(ENCODER_RIGHT_A, INPUT);
  pinMode(ENCODER_RIGHT_B, INPUT); 
}

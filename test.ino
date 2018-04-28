

#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

// called this way, it uses the default address 0x40
Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

#define SERVOMIN  150 // this is the 'minimum' pulse length count (out of 4096)
#define SERVOMAX  600 // this is the 'maximum' pulse length count (out of 4096)

void setup() {
  Serial.begin(9600); //Defines BOD rate

  pwm.begin(); //Starts PWM
  
  pwm.setPWMFreq(60);  // Analog servos run at ~60 Hz updates
  uint16_t pulselen = map(0, 0, 180, SERVOMIN, SERVOMAX);
  
  pwm.setPWM(0, 0, pulselen);
  pwm.setPWM(1, 0, pulselen);
  pwm.setPWM(2, 0, pulselen);
  delay(10);
}

void loop() {
  // Sets the pulse length to map from 0 - 180 degrees
  uint16_t pulselen = map(0, 0, 180, SERVOMIN, SERVOMAX);
  uint16_t alt = 1;
  uint16_t gyro = 1;
  // Sets PWM (Servo Number), (), (PulseLength)
  if(0 < alt &&  alt < 6000){
    if(gyro > 0) {
      pulselen = map(5, 0, 180, SERVOMIN, SERVOMAX);
      pwm.setPWM(0, 0, pulselen);
      pwm.setPWM(1, 0, pulselen);
      pwm.setPWM(2, 0, pulselen);
      gyro = -1;
      delay(1000);
    } else if(gyro < 0) {
      pulselen = map(-5, 0, 180, SERVOMIN, SERVOMAX);
      pwm.setPWM(0, 0, pulselen);
      pwm.setPWM(1, 0, pulselen);
      pwm.setPWM(2, 0, pulselen);
      gyro = 1;
      delay(1000);
    } else {
       
    }
  }
  else{
    pulselen = map(0, 0, 180, SERVOMIN, SERVOMAX);
  
    pwm.setPWM(0, 0, pulselen);
    pwm.setPWM(1, 0, pulselen);
    pwm.setPWM(2, 0, pulselen);
  }
  // Sets next State
  
  
  delay(5000);
}

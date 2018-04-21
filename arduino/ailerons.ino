

#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

// called this way, it uses the default address 0x40
Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

#define SERVOMIN  150 // this is the 'minimum' pulse length count (out of 4096)
#define SERVOMAX  600 // this is the 'maximum' pulse length count (out of 4096)

void setup() {
  Serial.begin(9600);

  pwm.begin();
  
  pwm.setPWMFreq(60);  // Analog servos run at ~60 Hz updates

  delay(10);
}

void loop() {

  uint16_t pulselen = map(0, 0, 180, SERVOMIN, SERVOMAX);
  pwm.setPWM(0, 0, pulselen);
  pwm.setPWM(1, 0, pulselen);
  pwm.setPWM(2, 0, pulselen);
  pwm.setPWM(3, 0, pulselen);
  delay(5000);

  
 
}
Moved

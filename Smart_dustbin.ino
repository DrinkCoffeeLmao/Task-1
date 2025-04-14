#include <Servo.h>

int RED=2,BUZ=8,SERVO=12;int PIR=7,TRIG_FULL=4,ECHO_FULL=13;
Servo motor;

void setup() {
  Serial.begin(9600);
  
  pinMode(PIR,INPUT);
  
  pinMode(TRIG_FULL,OUTPUT);
  pinMode(ECHO_FULL,INPUT);

  pinMode(RED,OUTPUT);
  pinMode(BUZ,OUTPUT);

  motor.attach(SERVO);
  motor.write(0);
}

void loop() {
  //Lid Movement Based on PIR Sensor
  if (digitalRead(PIR)==HIGH) {
    motor.write(45);  //Open lid
    delay(500);
  } else {
    motor.write(0);   //Close lid
  }

  //Check Trash Level
  digitalWrite(TRIG_FULL,LOW);
  delay(2);
  digitalWrite(TRIG_FULL,HIGH);
  delay(10);
  digitalWrite(TRIG_FULL,LOW);

  long duration = pulseIn(ECHO_FULL,HIGH);
  int distance=(duration*0.034)/2;  // Convert to cm
  
  Serial.print("Space left: ");
  Serial.println(distance);

  digitalWrite(RED,LOW);
  digitalWrite(BUZ,LOW);

  if (distance>0) {// Ensure valid reading
    if (distance<10) {
      digitalWrite(RED,HIGH);
      digitalWrite(BUZ,HIGH);
      delay(500);
    } else if (distance<=30&&distance>=10) {
      digitalWrite(RED,LOW);
      delay(500);
    }
    else{
      digitalWrite(RED,LOW);
    }
  }
  delay(100);
}

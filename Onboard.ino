#include <SoftwareSerial.h>

SoftwareSerial btbot(2, 4);

#include <Servo.h>

Servo myservo;

#define leftf 5
#define leftb 6
#define rightf 11
#define rightb 3
//
char a;
int r = 0, l = 0;
int previousstate = 100;
int rightspeed = 85;
int leftspeed = 85;

int pos = 160;

void setup() {
  Serial.begin(9600);
  motor_init();
  communication_init();
}

void loop() {
  if (btbot.available()) {
    a = btbot.read();
    follow();
  }
//    else stop1();
}


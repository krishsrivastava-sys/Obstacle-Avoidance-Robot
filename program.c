#include <AFMotor.h>
#include <Servo.h>
#include <NewPing.h>

// Ultrasonic sensor pins
#define TRIG_PIN A3
#define ECHO_PIN A2
#define MAX_DISTANCE 200

NewPing sonar(TRIG_PIN, ECHO_PIN, MAX_DISTANCE);
Servo servo_motor;

// Define motors (using Adafruit Motor Shield library type)
AF_DCMotor motorLeft(1);   // M1 terminal
AF_DCMotor motorRight(2);  // M2 terminal

int distance = 100;

void setup() {
  servo_motor.attach(9);  // SERVO1 pin on shield
  servo_motor.write(90);
  delay(1000);

  motorLeft.setSpeed(200);
  motorRight.setSpeed(200);

  distance = readPing();
}

void loop() {
  int distanceRight = 0;
  int distanceLeft = 0;

  if (distance <= 20) {
    moveStop();
    delay(300);
    moveBackward();
    delay(400);
    moveStop();
    delay(300);
    distanceRight = lookRight();
    delay(300);
    distanceLeft = lookLeft();
    delay(300);

    if (distanceRight >= distanceLeft)
      turnRight();
    else
      turnLeft();
  } else {
    moveForward();
  }

  distance = readPing();
}

// Movement functions
void moveForward() {
  motorLeft.run(FORWARD);
  motorRight.run(FORWARD);
}

void moveBackward() {
  motorLeft.run(BACKWARD);
  motorRight.run(BACKWARD);
}

void moveStop() {
  motorLeft.run(RELEASE);
  motorRight.run(RELEASE);
}

void turnRight() {
  motorLeft.run(FORWARD);
  motorRight.run(BACKWARD);
  delay(400);
  moveStop();
}

void turnLeft() {
  motorLeft.run(BACKWARD);
  motorRight.run(FORWARD);
  delay(400);
  moveStop();
}

// Ultrasonic helper functions
int lookRight() {
  servo_motor.write(30);
  delay(500);
  int distance = readPing();
  delay(100);
  servo_motor.write(90);
  return distance;
}

int lookLeft() {
  servo_motor.write(150);
  delay(500);
  int distance = readPing();
  delay(100);
  servo_motor.write(90);
  return distance;
}

int readPing() {
  delay(70);
  int cm = sonar.ping_cm();
  if (cm == 0) cm = 250;
  return cm;
}

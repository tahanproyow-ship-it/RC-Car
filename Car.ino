#include <Servo.h>
#include <SoftwareSerial.h>
#include "CRSFforArduino.hpp"

// ----- Channels -----
#define ARM_CHANNEL 5
#define ARM_MIN     988
#define ARM_MAX     2012

#define DIR_CHANNEL 8
#define DIR_MIN     988
#define DIR_MAX     2012

#define THROTTLE_CHANNEL 3
#define THROTTLE_MIN     988
#define THROTTLE_MAX     2012

#define STEERING_CHANNEL 4
#define STEERING_MIN     988
#define STEERING_MAX     2012

// ----- CRFS -----
CRSFforArduino *crsf = nullptr;
int rcChannelCount = crsfProtocol::RC_CHANNEL_COUNT;
SoftwareSerial crsfSerial(CRFS_TX_PIN, CRFS_RX_PIN);

#define CRSF_Speed 115200

#define CRFS_TX_PIN 10
#define CRFS_RX_PIN 11

// ----- Servo -----
Servo Steering;

#define SERVO_STEERING_PIN 9

// ----- Motor -----

#define MOTOR_INV 0
#define MOTOR_POWER 255

#define MOTOR_A_PIN 9
#define MOTOR_B_PIN 9

void setup() {
  Serial.begin(9600);
  
  
  Steering.attach(SERVO_STEERING_PIN);

}

void loop() {
  Steering.write(val); 

}

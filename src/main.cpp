/**
* READING GYRO
*/
#include <Arduino.h>
#include <Wire.h>

#define GYRO_DATA_REGISTER 0x43
#define PWR_MGMT_1_REGISTER 0x6B

int16_t Gyro_X, Gyro_Y, Gyro_Z;

void setup() {
  Serial.begin(57600);
  // Serial.begin(115200);
  Serial.println("Setup Start!");

  // LED
  pinMode(PC13, OUTPUT);

  // GYRO
  Wire.begin();
  Wire.setClock(400000);
  delay(250);

  Wire.beginTransmission(0x68);
  Wire.write(PWR_MGMT_1_REGISTER);
  Wire.write(0x00); // write this to PWR_MGMT_1_REGISTER, to activate Gyro
  Wire.endTransmission();
}

void loop() {
  Wire.beginTransmission(0x68);
  Wire.write(GYRO_DATA_REGISTER); // in the datasheet, register 0x43 is where gyro data starts
  Wire.endTransmission();
  Wire.requestFrom(0x68, 6); // request to start reading from the already set GYRO_DATA_REGISTER, as much as 6 bytes
  Gyro_X = Wire.read() << 8 | Wire.read();
  Gyro_Y = Wire.read() << 8 | Wire.read();
  Gyro_Z = Wire.read() << 8 | Wire.read();
  Serial.print("X = ");
  Serial.print(Gyro_X);
  Serial.print(", Y = ");
  Serial.print(Gyro_Y);
  Serial.print(", Z = ");
  Serial.println(Gyro_Z);

  digitalWrite(PC13, HIGH);
  delay(250);
  digitalWrite(PC13, LOW);
  delay(250);
}


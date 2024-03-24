#ifndef SensorDuinoV2_h
#define SensorDuinoV2_h

#include <Wire.h>
#include <BH1750.h>

// MPU6050 (Not used in the given setup but defined for completeness)
#define MPU6050_addr 0x68
// BH1750 light sensor
#define BH1750_addr 0x23
// SHT30 temperature and humidity sensor
#define SHT30_addr 0x44
// HP203N pressure sensor
#define HP203N_addr 0x77
// ZE08 formaldehyde sensor
#define ZE08_addr 0x32

// MQ-2 Sensor pins
#define MQ2_Switch_Pin 5
#define MQ2_Read_Pin 36
// Battery monitoring pin
#define Battery_Monitor_Pin 39

// ZE08 sensor switch pin
#define ZE08_Switch_Pin 4

// LED and buzzer pins
#define LED_Pin 14
#define Buzzer_Pin 32

// SensorDuino serial communication pins
#define SensorDuino_RXD 17
#define SensorDuino_TXD 16

#endif

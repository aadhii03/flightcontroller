# STM32 Flight Controller
This repository contains the development of an STM32-based flight controller designed for drones and other UAVs. The project leverages the STM32F103 microcontroller and is developed using both the Arduino IDE and PlatformIO. The flight controller integrates essential components such as the MPU6050 for gyroscope and accelerometer data, ExpressLRS for radio communication, and a custom PID loop for attitude control. The goal is to create a lightweight, efficient, and highly responsive flight control system.

## Key Features
- MPU6050: Utilizes the MPU6050 sensor for accurate gyroscope and accelerometer data.
- ExpressLRS Communication: Implements ExpressLRS as the radio receiver with Crossfire (CRSF) as the communication protocol for low-latency control.
- PID Loop: A custom PID control loop for stable and precise attitude control.
- Motor Mixing: Generates motor signals through motor mixing based on processed PID values.
- Bit Banging: Uses bit banging for faster pin control and improved cycle times.
- Profiling: Includes a profiler to monitor and optimize software performance metrics.

## Development Notes
- [x] success compile STM32F103 in Arduino IDE & PlatformIO
- [x] basic functions running: MPU6050, ELRS
- [ ] PID loop, bit banging
- [ ] motor mixer, motor PWM control
- [ ] loop optimization
- [ ] LED indicator
- [ ] more control functions

## Requirements
- Uses MPU6050 as gyro & accelerometer
- Does bit banging as means of setting pins for faster cycle time
- Uses ExpressLRS as radio reciever and crossfire as communication protocol
- Implements PID loop to control attitude
- Generates motor signals through motor mixing from processed values from PID loop
- Implements profiler to detect software metrics
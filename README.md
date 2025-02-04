# STM32 Flight Controller 🚀
This repository hosts an STM32F103-based flight controller for drones, featuring MPU6050, ExpressLRS, PID control, and motor mixing. Built with PlatformIO for lightweight, efficient UAV control.

## Key Features ✨
- MPU6050: Gyroscope & accelerometer for precise motion tracking.
- ExpressLRS: Low-latency radio communication with Crossfire (CRSF).
- PID Loop: Custom control loop for stable flight.
- Motor Mixing: Generates motor signals from PID outputs.
- Bit Banging: Faster pin control for improved performance.
- Profiling: Optimizes software metrics for efficiency.

## Development Notes ⚙️
- [x] compile STM32F103 project in Arduino IDE & PlatformIO
- [x] basic functions running: MPU6050, ELRS
- [ ] PID loop, bit banging
- [ ] motor mixer, motor PWM control
- [ ] loop optimization
- [ ] LED indicator
- [ ] more control functions

## Requirements 🗒️
- Uses MPU6050 as gyro & accelerometer
- Does bit banging as means of setting pins for faster cycle time
- Uses ExpressLRS as radio reciever and crossfire as communication protocol
- Implements PID loop to control attitude
- Generates motor signals through motor mixing from processed values from PID loop
- Implements profiler to detect software metrics

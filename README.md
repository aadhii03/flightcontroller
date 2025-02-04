# STM32 Flight Controller

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
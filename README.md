# STM32 Flight Controller

# Requirements
- Uses MPU6050 as gyro & accelerometer
- Does bit banging as means of setting pins for faster cycle time
- Uses ExpressLRS as radio reciever and crossfire as communication protocol
- Implements PID loop to control attitude
- Generates motor signals through motor mixing from processed values from PID loop
- Implements profiler to detect software metrics
# Door Lock System using IR Sensor and Servo

This project is a simple door lock system that uses an IR sensor and a servo motor. The system is designed to lock and unlock a door based on the presence of an object in front of the IR sensor.

## Components

The following components are required to build this project:

- Arduino Uno
- IR Sensor
- Servo Motor
- Jumper Wires

## Wiring Connections

IR Sensor:

VCC to 5V on Arduino

GND to GND on Arduino

OUT to A0 on Arduino


Servo Motor:

VCC to 5V on Arduino

GND to GND on Arduino

Signal to pin 3 on Arduino


## Code

The code for this project is written in C++ and can be found in the `door-lock.ino` file. The code uses the `Servo.h` library to control the servo motor and the `analogRead()` function to read the output of the IR sensor.

## Usage

To use the door lock system, simply upload the code to your Arduino Uno and connect the components. Once the system is powered on, it will lock and unlock the door based on the presence of an object in front of the IR sensor.


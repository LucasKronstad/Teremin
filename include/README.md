# Theremin

## What it does
This is an arduino UNO version of a theremin.
A theremin is an instrument played with your hands or any other object by moving it further or closer to a sensor.
Moving closer to the sensor results in a higher pitch and moving away from it creates a lower pitch.
Therefore you can create different notes and play music in floating air.

## How it works
#### Equipment
* Arduino UNO
* HY-SRF05 (compatible with HC-SR04)
* Speaker
* Breadboard
* Jumper wires
* 100 OHM resistor

My version uses an ultrasonic distance sensor to determine if an object is in front of the sensor and correlates to a frequency. To start the program I downloaded the libraries *NewPing* and *ToneAC* in order to not have to "reinvent the wheel" so to speak. These libraries contain code to easier navigate and manipulate the ultrasonic sensor and the frequencies for the speaker. 
![Circuit diagram](circuit.png)
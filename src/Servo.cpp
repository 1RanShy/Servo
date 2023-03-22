#include <pigpio.h>
#include "Servo.h"
#include <iostream>
using namespace std;

void Servo::setAngle(int pin, int angle)
{
    // gpioServo(3, 500);   // choose  which pin to produce PWM for the Serco Engine
    gpioSetMode(pin, PI_OUTPUT);
    switch (angle)
    {
    case 0:
        gpioServo(pin, 500);
        break;
    case 45:
        gpioServo(pin, 1000);
        break;
    case 90:
        gpioServo(pin, 1500);
        break;
    case 135:
        gpioServo(pin, 2000);
        break;
    case 180:
        gpioServo(pin, 2500);
    default:
        break;
    }
    cout << "Servo Pin is " << pin << endl;
    cout << "The Serco Engine has been set to  "
         << angle << " degree " << endl;
}

/*
example code
int main()
{
    Servo servo1;

    servo1.setAngle(1);
    return 0;
}
*/

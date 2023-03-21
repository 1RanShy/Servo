#include <pigpio.h>
#include "Servo.h"
#include <iostream>
using namespace std;

void Servo::setAngle(int angle)
{
    //gpioServo(3, 500);   // choose  which pin to produce PWM for the Serco Engine
    switch (angle)
    {
    case 0:
        gpioServo(3, 500);
        break;
    case 45:
        gpioServo(3, 1000);
        break;
    case 90:
        gpioServo(3, 1500);
        break;
    case 135:
        gpioServo(3, 2000);
        break;
    case 180:
        gpioServo(3, 2500);
    default:
        break;
    }
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

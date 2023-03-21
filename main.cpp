#include <pigpio.h>
#include "include/Servo.h"
#include <iostream>
using namespace std;

int main()
{
    if (gpioInitialise() < 0) {
        cout << "Failed" << endl;
        return 0;
    } else {
        cout << "PIGPIO is ready" << endl;
    }
    Servo servo1;

    servo1.setAngle(45);
    return 0;
}

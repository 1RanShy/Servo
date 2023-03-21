# Explanation

This is a demo which can works in raspberry pi

# Resperripi
This has been moved to resperipi. And can work properly.

~~~text
1. include<pigpio.h>
2. switch -----
~~~

To cmake it in Windows

~~~cmake
# in build folder
cmake .. 
make
~~~

2023/03/21 18:03

remember that in switch sentence you should write break!!!!

~~~cmake
include_directories(include) #包含头文件目录
# If you write this in you cmakeList, you do not need to write absolute routine
# just normal routine is ok. no: "../include/Servo.h" but "Servo.h"
~~~

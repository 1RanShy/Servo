# Explanation

This is a demo about Servo Engine
I wrote this in my Windows Laptop.
So if run it in resperri pi, you should uncomment sth.

# Resperripi
This has been moved to resperipi. And can work properly.

~~~text
1. include<gpio>
2. switch -----
~~~

To cmake it in Windows

~~~cmake
# in build folder
cmake .. -G "MinGW Makefiles"
mingw32-make
~~~

2023/03/21 18:03

remember that in switch sentence you should write break!!!!

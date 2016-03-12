# 387-Midterm, 3-axis Accelerometer and Compass 
ECE 387 Midterm 

  I have created a project which uses a 3-axis accelerometer and compass with arduino uno to indicate how to rotate the device in order to position the device a certain way. The output is displayed through 8 LEDs which indicate which direction the device should be rotated. 2 LEDs are used for each axis, x y and z, and 2 for the magnetic direction. If the device is positioned correctly, (which I have defined at setting flat, right side up, and facing north) all LEDs will be turned on. If not facing the correct direction the LEDs corresponding to the direction it needs to rotate will flash. 
  
  The wiring for this device is pretty straight forward and is shown below
  ![alt tag](https://github.com/sulliv35/387-Midterm/blob/master/ece387Midterm1.png)
  
  The resistors used are 220Ohms. This provides the LEDs with an approiate current of approximately 15-16mA. The accelerometer is fairly simple to hook up. It requires a 3.3V power supply and ground. Additionally just 2 pins for the clock and data transfer. You can also use the 5V power supply instead of 3.3V if for some reason it was needed.
  
  The orientation of the device is determined through reading data in from the accelerometer through use of the provided LSM303 library (1). The library made it easy for me to access values of acceleration in each direction but that is useless without some interpretation. My added value was transferring these values into meaningful information and displaying it nicely through the form of LEDs. If the chip is setting flat I know the x and y axis should be parallel to the ground and thus acceleration should be close to zero, though some threshold should be established as it will not be perfect. Also, to be facing upward, the acceleration in the z axis will be completely negative. Finally, the device uses a magnetometer to read the magnetic field strength allow north to be found. By interpruting the magnetic forces in all direction I was able to indicate through the remaining two lights which direction to rotate in order to be facing north. 
  
  
Here is a link to a video demonstration of my project: https://www.youtube.com/watch?v=DMSAxv_Mxnw&feature=youtu.be  
  


My file is found above under 'Added Code'

References

Accessed March 3, 2016

(1) Libraries I used are also included under 'Base Code' and were taken from https://github.com/adafruit/Adafruit_LSM303

(2) Information on the FLORA accelerometer can be found at https://www.adafruit.com/products/1247 


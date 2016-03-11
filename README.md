# 387-Midterm, 3-axis Accelerometer and Compass 
ECE 387 Midterm 

  I have created a project which uses a 3-axis accelerometer and compass with arduino uno to indicate how to rotate it in order to position the device a certain way. The output is displayed through 8 LEDs which indicate which direction the device should be rotated. 2 LEDs are used for each axis, x y and z, and 2 for the magnetic direction. If the device is positioned correctly, (which I have defined at setting flat, right side up, and facing north) all LEDs will be turned on. If not facing the correct direction the LEDs corresponding to the direction it needs to rotate will flash. 
  
  The orientation of the device will be determined through reading data in from the accelerometer throguh use of the provided LSM303 library included in the files. The library has made it easy for me to read in the acceleration values in each axis direction but it is up to my program to determine what that means. If the chip is setting flat I know the x and y axis should be parallel to the ground and thus acceleration should be close to zero, though some threshold should be established as it will not be perfect. Also, to be facing upward, the acceleration in the z axis will be completely negative. Finally, the device uses a magnetometer to read the magnetic field strength allow north to be found. By interpruting the magnetic forces in all direction I was able to indicate through the remaining two lights which direction to rotate in order to be facing north. 
  
Here is a circuit diagram of project
![alt tag](https://raw.githubusercontent.com/sulliv35/387-Midterm/blob/master/ece387Midterm1.png)

My file is found above under the name ECE387_Midterm.ino

Libraries I used are also include for the LSM303


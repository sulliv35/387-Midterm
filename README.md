# 387-Midterm, 3-axis Accelerometer 
ECE 387 Midterm 

I am going to use a Flora's Accelerometer + Compass to create a device that is able to sense it's position in all directions and will display, using 8 LEDs, how the user should rotate the device in order to even it out. The device will use the flashing of LED's to state how close it is to some set position which I will define as the top of chip upwards, the device setting flat, and the device facing north. This will be done by checking the axis values of the accelerator to ensure both x and y axis are evened out at 0 (or at least close), the z-axis is negative and the compass facing north. The LEDs will flash/dim when then user is farther away from the set position and will stop flashing/brighten as it has reaches the correct position. In order to notify the user which direction to rotate the device (for example is it left or right of north) two LEDs will be used for each x,y,z axis and compass direction. 

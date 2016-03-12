//Mark Sullivan

#include <Wire.h>
#include <Adafruit_LSM303.h>

Adafruit_LSM303 lsm;

void setup() {
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT); //y left
  pinMode(12, OUTPUT); //x down
  pinMode(11, OUTPUT); //x up
  pinMode(10, OUTPUT); //y right
  pinMode(9, OUTPUT);  //z down
  pinMode(8, OUTPUT);  //z up
  pinMode(7, OUTPUT);  //dir left
  pinMode(6, OUTPUT);  //dir right

  Serial.begin(9600);
  
  // Try to initialise and warn if we couldn't detect the chip
  if (!lsm.begin())
  {
    Serial.println("Oops ... unable to initialize the LSM303. Check your wiring!");
    while (1);
  }
}

void loop() {
  digitalWrite(13, HIGH);  
  digitalWrite(12, HIGH);  
  digitalWrite(11, HIGH);  
  digitalWrite(10, HIGH);  
  digitalWrite(9, HIGH);  
  digitalWrite(8, HIGH);  
  digitalWrite(7, HIGH); 
  digitalWrite(6, HIGH);  
  delay(500);
  
  lsm.read();
  
  if(((int)lsm.accelData.x) > 100){
    digitalWrite(11, LOW);
  }
  if(((int)lsm.accelData.x) < -100){
    digitalWrite(12, LOW);
  }
  if(((int)lsm.accelData.y) > 100){
    digitalWrite(13, LOW);
  }
  if(((int)lsm.accelData.y) < -100){
    digitalWrite(10, LOW); 
  }
  if(((int)lsm.accelData.z) < 1000){
    digitalWrite(8, LOW);
  }
  if((int)lsm.magData.x > 230){
    digitalWrite(7,HIGH);
    digitalWrite(6,HIGH);
  }
  else if((int)lsm.magData.y > 0){
    digitalWrite(7,LOW);
  }
  else if((int)lsm.magData.y > -120 && (int)lsm.magData.x > 120){
    digitalWrite(7,LOW);
  }
  else{
    digitalWrite(6,LOW);
  }
  //couples is for direction facing
//  Serial.print((int)lsm.accelData.x);
//  Serial.print(" ");
//  Serial.print((int)lsm.accelData.y);
//  Serial.print(" ");
//  Serial.println((int)lsm.accelData.z);

  Serial.print((int)lsm.magData.x);
  Serial.print(" ");
  Serial.println((int)lsm.magData.y);
  
  delay(500);
 
}

// hc06 port //slave
char state = "4";

#include <SoftwareSerial.h>

SoftwareSerial hc06(2,3);


void setup() {
  Serial.begin(38400);

  
  hc06.begin(9600); // Default communication rate of the Bluetooth module
}
void loop() {
 if(hc06.available() > 0){ // Checks whether data is comming from the serial port
    state = hc06.read(); // Reads the data from the serial port
 }
 
 Serial.write(state);
 state = " ";
 delay(50);
 
 
  
  
  
}

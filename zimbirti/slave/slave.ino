// hc06 port //slave // okuyan
char state = "4";
String stdnumber;
int a = 0;
#include <SoftwareSerial.h>

SoftwareSerial hc06(2,3);


void setup() {
  
  Serial.begin(38400);

  Serial.print(stdnumber);
  hc06.begin(9600); // Default communication rate of the Bluetooth module
}
void loop() {
 if(hc06.available() > 0){ // Checks whether data is comming from the serial port
    state = hc06.read(); // Reads the data from the serial port
    
 }
 if(stdnumber.length()<5){
  stdnumber += state;
  }
 
 for(int i=0; i<stdnumber.length(); i++) {
    Serial.print(stdnumber.charAt(i));
    
  }
 
 delay(300);
 
}

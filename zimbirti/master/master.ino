//hc05 //port3 //master


#include <SoftwareSerial.h>

SoftwareSerial BTSerial(10, 11); // RX | TX
int state = 20;


void setup() {


  BTSerial.begin(9600); // Default communication rate of the Bluetooth module
}
void loop() {
 if(BTSerial.available() > 0){ // Checks whether data is comming from the serial port
    state = BTSerial.read(); // Reads the data from the serial port
 }
 // Reading the potentiometer

 BTSerial.write("emre"); // Sends potValue to servo motor
 delay(50);
}

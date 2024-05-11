#include <SoftwareSerial.h>
SoftwareSerial hc06(10,11);

void setup() {
  
  Serial.begin(9600);
  hc06.begin(9600);

}

void loop() {
  if(hc06.available()){
    Serial.print("Bluetooth hc-06'den gelen değer: ");
    Serial.write(hc06.read());
    Serial.println(" ");
  }

}

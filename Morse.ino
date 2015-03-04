#include "morse.h"

void setup() {

 pinMode(13, OUTPUT); 

 Serial.begin(9600);

}

void loop() {

  if (Serial.available()) {

    unsigned char ch = Serial.read();

    if (ch == '\r') {

      Serial.write('\r');
      Serial.write('\n');

    } else

      Serial.write(ch);

    morse(ch, 13);

  }
  
}

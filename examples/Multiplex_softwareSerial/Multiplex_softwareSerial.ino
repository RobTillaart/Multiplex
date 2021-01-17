//
//    FILE: Multiplex_softwareSerial.ino
//  AUTHOR: Rob Tillaart
// VERSION: 0.1.0
// PURPOSE: demo
//    DATE: 2021-01-17

#include "Multiplex.h"
#include "SoftwareSerial.h"

// one multiplexer
Multiplex mp;

// three serial outputs
SoftwareSerial Serial1(-1, 8);
SoftwareSerial Serial2(-1, 9);
SoftwareSerial Serial3(-1, 10);

void setup()
{
  Serial.begin(115200);
  Serial.println(__FILE__);

  Serial1.begin(19200);
  Serial2.begin(19200);
  Serial3.begin(19200);
  
  mp.add(&Serial1);
  mp.add(&Serial2);
  mp.add(&Serial3);
  
  for (int i = 0; i < mp.count(); i++)
  {
    Serial.print("isEnabled ");
    Serial.print(i);
    Serial.print(":\t");
    Serial.println(mp.isEnabled(i));
  }

  int n = mp.println("hello world");
  Serial.print("count: ");
  Serial.println(n);

  mp.println("\n Done...\n");

}

void loop()
{
}


// -- END OF FILE --

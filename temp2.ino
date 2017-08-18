#include <dht.h>

dht DHT;

#define DHT11_PIN A0

void setup()
{
  Serial.begin(9600);
  pinMode(9,OUTPUT);
  

}

void loop()
{
  int chk = DHT.read11(DHT11_PIN);

  Serial.println(int(DHT.temperature));
  if(DHT.temperature>20)
  {
    analogWrite(9,150);
  }
  if(DHT.temperature>30)
  {
    analogWrite(9,250);
  }
  delay(1000);
}
  

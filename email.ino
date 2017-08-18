#include <dht.h>

dht DHT;

#define DHT11_PIN A0

void setup()
{
  Serial.begin(9600);

  

}

void loop()
{
  int chk = DHT.read11(DHT11_PIN);

  Serial.write(int(DHT.temperature));

  delay(1000);
}
  

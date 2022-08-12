#include <Arduino.h>
#include "SparkFunLIS3DH.h"
#include <Wire.h>
#include <stdio.h>

LIS3DH SensorTwo(0x18);

void lis3dh_read_data()
{
  // read the sensor value
  Serial.print(" X(g) = ");
  Serial.println(SensorTwo.readFloatAccelX(), 4);
  Serial.print(" Y(g) = ");
  Serial.println(SensorTwo.readFloatAccelY(), 4);
  Serial.print(" Z(g)= ");
  Serial.println(SensorTwo.readFloatAccelZ(), 4);
}
void setup()
{
  delay(3000);
  time_t timeout = millis();
  Serial.begin(115200);
  delay(3000);
  Serial.println("Starting");
  while (!Serial)
  {
    if ((millis() - timeout) < 5000)
    {
      delay(100);
    }
    else
    {
      break;
    }
  }

  Wire.begin();
  delay(1000);

  if (SensorTwo.begin() != 0)
  {
    Serial.println("Problem starting the sensor at 0x18.");
  }
  else
  {
    Serial.println("Sensor at 0x18 started.");
  }
  Serial.println("enter !");
}

void loop()
{
  Serial.println("OK");
  lis3dh_read_data();
  delay(1000);
}
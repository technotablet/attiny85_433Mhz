#include <Arduino.h>

uint8_t g_TxPin = 3;

uint8_t g_BtnLeft = 1;
uint8_t g_BtnRight = 2;

void WriteFreq(uint16_t Delay);

void setup()
{
  // put your setup code here, to run once:
  pinMode(g_TxPin,OUTPUT); 
  pinMode(g_BtnLeft,INPUT); 
  pinMode(g_BtnRight,INPUT); 

}

void loop()
{
  // put your main code here, to run repeatedly:
  if(digitalRead(g_BtnLeft))
  {
    WriteFreq(1000);
  }  
  else if(digitalRead(g_BtnRight))
  {
    WriteFreq(1500);
  }   
  else
  {
    WriteFreq(2000);
  }
}

void WriteFreq(uint16_t Delay)
{
  digitalWrite(g_TxPin,LOW);
  delayMicroseconds(Delay);
  digitalWrite(g_TxPin,HIGH);
  delayMicroseconds(Delay);
}

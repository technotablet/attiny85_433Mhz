#include <Arduino.h>

int RX = 3;
int pin_led = 0;
int pin_state= 0;
unsigned long counter = 0;
unsigned long prev_counter = 0;
long DELAY = 0;
float freq = 0;


unsigned long previousMillis = 0; 

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(RX,INPUT);
  pinMode(13,OUTPUT);
  Serial.println("Hello");
}

void loop()
{
  // put your main code here, to run repeatedly:
  unsigned long currentMillis = millis();  
  if(currentMillis - previousMillis >= 100){
  
      previousMillis += 100;
      if(DELAY > 800 && DELAY < 1200)
      {
       Serial.println("Button 1");
       Serial.println("");
      }
      if(DELAY > 1300 && DELAY < 1700)
      {
       Serial.println("Button 2");
       Serial.println("");
      }
  }

  
 if(analogRead(RX) > 700 && pin_state== 0)
 {
  pin_state=1;
  prev_counter = micros();
 }

 if(analogRead(RX) < 700 && pin_state== 1)
 {
  pin_state=0;
  counter = micros();
  DELAY = counter - prev_counter;   
 }
 
  if(DELAY > 2000)
  {
    digitalWrite(13,LOW);
  }
  if(DELAY < 1500)
  {
    digitalWrite(13,HIGH);
  }
 
}
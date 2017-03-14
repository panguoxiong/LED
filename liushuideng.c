#include<stdio.h>
#include<wiringPi.h>

int main()
{
	wiringPiSetup();
	pinMode(9,OUTPUT);    //R
	pinMode(7,OUTPUT);    //B
	pinMode(0,OUTPUT);    //G
	
	pinMode(13,OUTPUT);    //D0
	pinMode(14,OUTPUT);    //D1
	pinMode(30,OUTPUT);    //D2
	pinMode(21,OUTPUT);    //D3
	pinMode(22,OUTPUT);    //D4
	pinMode(23,OUTPUT);    //D5
	pinMode(24,OUTPUT);    //D6
	pinMode(25,OUTPUT);    //D7
	
	while(1)
	{
			digitalWrite(13,HIGH);
			digitalWrite(14,HIGH);
			digitalWrite(30,HIGH);
			digitalWrite(21,HIGH);
			digitalWrite(22,HIGH);
			digitalWrite(23,HIGH);
			digitalWrite(24,HIGH);
			digitalWrite(25,HIGH);
			
			digitalWrite(13,LOW);
			digitalWrite(9,LOW);
			digitalWrite(7,HIGH);
			digitalWrite(0,HIGH);
			digitalWrite(9,LOW);
			digitalWrite(7,HIGH);
			digitalWrite(0,HIGH);
			delay(50);
			digitalWrite(13,HIGH);
			
			digitalWrite(14,LOW);
			digitalWrite(9,LOW);
			digitalWrite(7,HIGH);
			digitalWrite(0,HIGH);
			digitalWrite(7,LOW);
			digitalWrite(9,HIGH);
			digitalWrite(0,HIGH);
			delay(50);
			digitalWrite(14,HIGH);
			
			digitalWrite(30,LOW);
			digitalWrite(9,LOW);
			digitalWrite(7,HIGH);
			digitalWrite(0,HIGH);
			digitalWrite(0,LOW);
			digitalWrite(7,HIGH);
			digitalWrite(9,HIGH);
			delay(50);
			digitalWrite(30,HIGH);
			
			digitalWrite(21,LOW);
			digitalWrite(9,LOW);
			digitalWrite(7,HIGH);
			digitalWrite(0,HIGH);
			digitalWrite(9,LOW);
			digitalWrite(7,HIGH);
			digitalWrite(0,HIGH);
			delay(50);
			digitalWrite(21,HIGH);
			
			digitalWrite(22,LOW);
			digitalWrite(9,LOW);
			digitalWrite(7,HIGH);
			digitalWrite(0,HIGH);
			digitalWrite(7,LOW);
			digitalWrite(9,HIGH);
			digitalWrite(0,HIGH);
			delay(50);
			digitalWrite(22,HIGH);
			
			digitalWrite(23,LOW);
			digitalWrite(9,LOW);
			digitalWrite(7,HIGH);
			digitalWrite(0,HIGH);
			digitalWrite(0,LOW);
			digitalWrite(7,HIGH);
			digitalWrite(9,HIGH);
			delay(50);
			digitalWrite(23,HIGH);
			
			digitalWrite(24,LOW);
			digitalWrite(9,LOW);
			digitalWrite(7,HIGH);
			digitalWrite(0,HIGH);
			digitalWrite(9,LOW);
			digitalWrite(7,HIGH);
			digitalWrite(0,HIGH);
			delay(50);
			digitalWrite(24,HIGH);
			
			digitalWrite(25,LOW);
			digitalWrite(9,LOW);
			digitalWrite(7,HIGH);
			digitalWrite(0,HIGH);
			digitalWrite(7,LOW);
			digitalWrite(9,HIGH);
			digitalWrite(0,HIGH);
			delay(200);
			digitalWrite(25,HIGH);
	}
	return 0;
}

#include<stdio.h>
#include<wiringPi.h>

int main()
{
	wiringPiSetup();
	pinMode(8,OUTPUT);
	digitalWrite(8,LOW);  //D0

	softPwmCreate(9,0,100);
	softPwmCreate(7,0,100);
	softPwmCreate(0,0,100);
	
	while(1)
	{
		softPwmWrite(9,255);
		softPwmWrite(7,150);
		softPwmWrite(0,50);
		delay(1000);
		softPwmWrite(9,100);
		softPwmWrite(7,200);
		softPwmWrite(0,150);
		delay(1000);
	}
	return 0;
}

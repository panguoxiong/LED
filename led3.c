#include<stdio.h>
#include<wiringPi.h>

int main()
{
	wiringPiSetup();
	pinMode(8,OUTPUT);   //D0
	
	pinMode(9,OUTPUT);
	pinMode(7,OUTPUT);
	pinMode(0,OUTPUT);
	
	digitalWrite(9,LOW);
	
	int total = 20;
	int time = total;
	int step = 1;
	int i;
	int flag =  0;
	while(1)
	{
		if(flag == 0)
		{
			time -= step;
			for(i=0;i<10;i++)
			{
				digitalWrite(8,HIGH);
				delay(time);
				digitalWrite(8,LOW);
				delay(total-time);
				if(time<=0)
				{
					time = total;
					flag = 1;
				}
			}
		}
		else
		{
			time -= step;
			for(i=0;i<10;i++)
			{
				digitalWrite(8,LOW);
				delay(time);
				digitalWrite(8,HIGH);
				delay(total-time);
				if(time<=0)
				{
					time = total;
					flag = 0;
				}
			}	
		}
	}
	return 0;
}

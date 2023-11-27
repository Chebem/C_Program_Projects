#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float tempf = 65.0;
	double tempc;
	tempc = (tempf - 32) / 1.8;
	printf("The temprature is %f degrees Celsius\n", tempc);
	
}
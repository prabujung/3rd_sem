#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
	return (sqrt(1-pow(x,2)));
}

void main()
{
	float x0,x3,f0,f3,h,value;
	printf("Enter the lower limit:");
	scanf("%f",&x0);
	printf("Enter the higher limit:");
	scanf("%f",&x3);
	f0=f(x0);
	f3=f(x3);
	h=(x3-x0)/3;
	value=(3*h*(f0+3*f(x0+h)+3*f(x0+2*h)+f3))/8;
	printf("The value is:%f",value);
	
}

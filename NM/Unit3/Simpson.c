#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
	return (sqrt(1-pow(x,2)));
}

void main()
{
	float x0,x1,x2,f0,f1,f2,h,value;
	printf("Enter the lower limit:");
	scanf("%f",&x0);
	printf("Enter the higher limit:");
	scanf("%f",&x2);
	f0=f(x0);
	f2=f(x2);
	h=(x2-x0)/2;
	x1=x0+h;
	f1=f(x1);
	value=(h*(f0+4*f1+f2))/3;
	printf("The value is:%f",value);
	
}

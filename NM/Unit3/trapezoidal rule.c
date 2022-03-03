#include<stdio.h>
#include<conio.h>

float f(float x)
{
	return (x*x*x+2);
}

void main()
{
	int x1,x2,f1,f2,h,value;
	printf("Enter the lower limit:");
	scanf("%d",&x1);
	printf("Enter the higher limit:");
	scanf("%d",&x2);
	f1=f(x1);
	f2=f(x2);
	h=(x2-x1);
	value=(h*(f1+f2))/2;
	printf("The value is:%d",value);
	
}

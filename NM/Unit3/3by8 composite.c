#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
	return (x*x*x+1);
}

void main()
{
	float x0,x3,f0,f3,h,value,sum;
	int i,n;
	printf("Enter the lower limit:");
	scanf("%f",&x0);
	printf("Enter the higher limit:");
	scanf("%f",&x3);
	printf("Enter the number of segments(multiple of 3):");
	scanf("%d",&n);
	f0=f(x0);
	f3=f(x3);
	h=(x3-x0)/n;
	sum=f0+f3;
	for(i=1;i<=n/3;i++)
 	{
 		sum=sum+3*f(x0+(3*i-2)*h)+3*f(x0+(3*i-1)*h);
    }
    for(i=1;i<=(n/3)-1;i++)
 	{
 		 sum=sum+2*f(x0+3*i*h);
    }

	value=(3*h*sum)/8;
	printf("The value is:%f",value);
}

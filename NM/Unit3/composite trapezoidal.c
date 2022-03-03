#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
	return (exp(x));
}

void main()
{
	double x1,x2,f1,f2,h,value,sum;
	int i,k;
	printf("Enter the lower limit:");
	scanf("%lf",&x1);
	printf("Enter the higher limit:");
	scanf("%lf",&x2);
	printf("Enter the number of segments:");
	scanf("%d",&k);
	f1=f(x1);
	f2=f(x2);
	h=(x2-x1)/k;
	sum=f1+f2;
	for(i=1;i<=k-1;i++)
	{
		sum=sum+2*f(x1+i*h);
	}
	value=(h*sum)/2;
	printf("The value is:%lf",value);
}

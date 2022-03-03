#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
	return (sqrt(1-pow(x,2)));
}

void main()
{
	float x0,x2,f0,f2,h,value,sum;
	int i,n;
	printf("Enter the lower limit:");
	scanf("%f",&x0);
	printf("Enter the higher limit:");
	scanf("%f",&x2);
	printf("Enter the number of segments(even):");
	scanf("%d",&n);
	f0=f(x0);
	f2=f(x2);
	h=(x2-x0)/n;
	sum=f0+f2;
	for(i=1;i<=n/2;i++)
 	{
 		sum=sum+4*f(x0+(2*i-1)*h);
    }
    for(i=1;i<=(n/2)-1;i++)
 	{
 		 sum=sum+2*f(x0+2*i*h);
    }

	value=(h*sum)/3;
	printf("The value is:%f",value);
}



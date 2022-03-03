#include<stdio.h>
#include<conio.h>
float x[10],y[10],lf,xp,sum=0.0;
int i,j,n;
void main()
{
	printf("Enter the number of terms in the table:");
scanf("%d",&n);
printf("Enter the values of x:");
for(i=0;i<n;i++)
{
	scanf("%f",&x[i]);
}
printf("Enter the functional values of x:");
for(i=0;i<n;i++)
{
	scanf("%f",&y[i]);
}
printf("The table is:\n");
printf("\tx\tf(x)\n");
for(i=0;i<n;i++){
	printf("\t%.3f\t%.3f",x[i],y[i]);
	printf("\n");
}
printf("Enter the value of x at which interpolation is required:");
scanf("%f",&xp);
for(i=0;i<=n-1;i++)
{
	lf=1.0;
	for(j=0;j<=n-1;j++)
	{
		if(j!=i)
		{
			lf=lf*((xp-x[j])/(x[i]-x[j]));
		}
	}
	sum=sum+lf*y[i];
}

printf("\nInterpolated function value at x=%.3f is x=%.3f",xp,sum);

}



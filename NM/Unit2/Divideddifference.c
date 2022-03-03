#include<stdio.h>
#include<conio.h>

void main()
{
	float x[10],y[10],xp,p=1.0,v=0.0;
int i,j,n;

	printf("Enter the number of terms in the table:");
scanf("%d",&n);
printf("Enter the values of x:");
for(i=0;i<=n-1;i++)
{
	scanf("%f",&x[i]);
}
printf("Enter the functional values of x:");
for(i=0;i<=n-1;i++)
{
	scanf("%f",&y[i]);
}
printf("The table is:\n");
printf("\tx\tf(x)\n");
for(i=0;i<=n-1;i++){
	printf("\t%.3f\t%.3f",x[i],y[i]);
	printf("\n");
}
printf("Enter the value of x at which interpolation is required:");
scanf("%f",&xp);
for(i=0;i<=n-1;i++)
{
	for(j=n-1;j>=i+1;j--)
	{
		y[j]=(y[j]-y[j-1])/(x[j]-x[j-1-i]);
	}
}
for(i=0;i<=n-1;i++)
{
	for(j=0;j<=i-1;j++)
	{
		p=p*(xp-x[j]);
	}
	v=v+y[i]*p;
	p=1;

}
printf("\nInterpolated function value at x=%.3f is %.3f",xp,v);
}

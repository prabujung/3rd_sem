#include<stdio.h>
#include<conio.h>
int fact(int n) {
   if (n==0||n==1)
   return 1;
   else{
    return n*fact(n-1);
   }
}
void main()
{
float x[10],y[10],xp,p=1.0,v,h,s;
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
	printf("\t%.4f\t%.4f",x[i],y[i]);
	printf("\n");
}
printf("Enter the value of x at which interpolation is required:");
scanf("%f",&xp);
h=x[1]-x[0];
s=(xp-x[0])/h;
v=y[0];
for(i=0;i<=n-1;i++)
{
	for(j=n-1;j>=i+1;j--)
	{
		y[j]=y[j]-y[j-1];
	}
}
for(i=1;i<=n-1;i++)
{
	for(j=1;j<=i;j++)
	{
		p=p*(s-j+1);
	}
	v=v+((y[i]*p)/fact(i));
	p=1;
}
printf("\nInterpolated function value at x=%.4f is %.4f",xp,v);
}

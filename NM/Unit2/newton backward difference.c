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
	float x[10],y[10],xp,v,h,s;
int i,j,k,n;
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
	printf("\t%.4f\t%.4f",x[i],y[i]);
	printf("\n");
}
printf("Enter the value of x at which interpolation is required:");
scanf("%f",&xp);
h=x[1]-x[0];
s=(xp-x[n-1])/h;
v=y[n-1];
for(i=n-1;i>=0;i--)
{
	for(j=0;j<i;j++)
	{
		y[j]=y[j+1]-y[j];
	}
}

for(i=n-2;i>=0;i--)
{
	float p=1;
	for(j=1;j<n-i;j++)
	{
		p=p*(s+j-1);
	}
	v=v+((y[i]*p)/fact(n-1-i));
}
printf("\nInterpolated function value at x=%.4f is %.4f",xp,v);
}

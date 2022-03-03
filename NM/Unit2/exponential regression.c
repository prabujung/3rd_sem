#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int i,j,n;
	double x[10],y[10],sx=0,sx2=0,lny=0,xlny=0,a,b,R;
	printf("Enter the number of terms in the table:");
	scanf("%d",&n);
	printf("Enter the values of x:");
	for(i=0;i<=n-1;i++)		
	{	
		scanf("%lf",&x[i]);
	}
	printf("Enter the functional values of x:");
	for(i=0;i<=n-1;i++)
	{
		scanf("%lf",&y[i]);
	}
	printf("The table is:\n");
	printf("\tx\tf(x)\n");
	for(i=0;i<=n-1;i++){
		printf("\t%.3lf\t%.3lf",x[i],y[i]);
		printf("\n");
	}
	for(i=0;i<=n-1;i++)		
	{	
		sx=sx+x[i];
		sx2=sx2+(x[i]*x[i]);
		lny=lny+log(y[i]);
		xlny=xlny+(x[i]*log(y[i]));
	}
	b=(n*xlny-(sx*lny))/(n*sx2-(sx*sx));
	R=(lny/n)-((b*sx)/n);
	a=exp(R);
	printf("\na=%.4lf",a);
	printf("\nb=%.4lf",b);
	printf("\nThe required equation is:y=%.4lfe^(%.4lfx)",a,b);
	return 0;
}

#include<stdio.h>
#include<conio.h>

int main()
{
	int x[10],y[10];
	int i,j,n,a,b;
	int sx=0,sy=0,sxy=0,sx2=0;
	printf("Enter the number of terms in the table:");
	scanf("%d",&n);
	printf("Enter the values of x:");
	for(i=0;i<=n-1;i++)		
	{	
		scanf("%d",&x[i]);
	}
	printf("Enter the functional values of x:");
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&y[i]);
	}
	printf("The table is:\n");
	printf("\tx\tf(x)\n");
	for(i=0;i<=n-1;i++){
		printf("\t%d\t%d",x[i],y[i]);
		printf("\n");
	}
	for(i=0;i<=n-1;i++)		
	{	
		sx=sx+x[i];
		sy=sy+y[i];
		sxy=sxy+(x[i]*y[i]);
		sx2=sx2+(x[i]*x[i]);
	}
	b=((n*sxy)-(sx*sy))/((n*sx2)-(sx*sx));
	a=(sy/n)-((b*sx)/n);
	
	printf("\na=%d",a);
	printf("\nb=%d",b);
	printf("\nThe required equation is:y=%d+%dx",a,b);
	return 0;
}

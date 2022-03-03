#include<stdio.h>
#include<conio.h>

int main()
{
	float x[10],y[10],a[10][10],b[10];
	int i,j,k,n;
	float sx=0,sy=0,sx2=0,sx3=0,sx4=0,sxy=0,sx2y=0,u=0;
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
		printf("\t%.2f\t%.2f",x[i],y[i]);
		printf("\n");
	}
	
	for(i=0;i<n;i++)
	{
		sx=sx+x[i];
		sy=sy+y[i];
		sx2=sx2+x[i]*x[i];
		sx3=sx3+x[i]*x[i]*x[i];
		sx4=sx4+x[i]*x[i]*x[i]*x[i];
		sxy=sxy+x[i]*y[i];
		sx2y=sx2y+x[i]*x[i]*y[i];
	}
	a[0][0]=n;
	a[0][1]=sx;
	a[0][2]=sx2;
	a[0][3]=sy;
	a[1][0]=sx;
	a[1][1]=sx2;
	a[1][2]=sx3;
	a[1][3]=sxy;
	a[2][0]=sx2;
	a[2][1]=sx3;
	a[2][2]=sx4;
	a[2][3]=sx2y;
printf("The matrix is:\n");
for(i = 0; i < 3; i++)
 {
  for(j = 0; j <= 3; j++)
  	printf("%.2f\t", a[i][j]);
   
  printf("\n");
 }
 for(k = 0; k <= 2; k++)
 {
  for(i = 0; i <= 2; i++)
  {
   if(i != k)
    u = a[i][k]/a[k][k];
   for(j = k; j <= 3; j++)
    a[i][j]=a[i][j]-u*a[k][j];
  }
 }
 for(i = 0; i < 3; i++)
 {
  b[i] = a[i][3]/a[i][i];
  printf("\nx[%d] = %.2f", i, b[i]);
 }
 printf("\n");
 printf("y = %.2fx^2+%.2fx+%.2f", b[2], b[1], b[0]);
}


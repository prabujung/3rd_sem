//program implementation of composite simpson's 1/3 rule
#include <stdio.h>
#include <math.h>

float f(float x)
{
    return sqrt(1-(x*x));
}
int main()
{
    int l, u, k;
    float h, sum=0;

    printf("Enter value of lower limit and uper limit respectively : ");
    scanf("%d %d",&l,&u);
    printf("enter number of segments : ");
    scanf("%d",&k);

    h=(u-l)/(float)k;
    sum = f(l)+f(u);
    printf("sum = %f \n", sum);
    for(int i=1; i<=k-1; i++)
    {
    
        sum += 4*f(l + i * h);
        i++;
        sum += 2*f(l + i * h);
    }
    printf("h = %f \n", h);
    printf("sum = %f ", sum);
    return 0;
}
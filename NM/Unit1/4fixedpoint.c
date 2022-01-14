#include <stdio.h>
#include <math.h>
#define    f(x)    2 - x*x

int main()
{
    float x0, e, x1;
    printf("Enter the initial guess : ");
    scanf("%d", &x0);
    printf("Enter the tolerable error : ");
    scanf("%d", &e);
    do
    {
        x1 = f(x0);
        x0 = x1;
    }while(fabsf((x1-x0)/x1) > e);
    printf("root : %f", x1);
    return 0;
}
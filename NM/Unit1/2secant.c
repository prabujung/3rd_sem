#include <stdio.h>
#include <math.h>

float f(float x)
{
    return x*x-4*x-10;
}

int main()
{
    float x1,x2,x3,e;
    printf("Enter two initial values : ");
    scanf("%f%f",&x1,&x2);
    printf("Enter tolorable error : ");
    scanf("%f", &e);
    while(fabsf((x2-x1)/x1) > e )
    {

        x3=(f(x2)*x1-f(x1)*x2)/(f(x2)-f(x1));
        x1=x2;
        x2=x3;
    }
    printf("The root is %f",x3);
    return 0;
}
#include <stdio.h>
#include <math.h>

float f(float x)
{
    return x*x-4*x-10;
}

float bisection(float x1, float x2, float e)
{
    float m;
    printf("\n%c  \t\t  %c\t\t   %c",'a','b','c');
    do
    {
        m=(x2+x1)/2;
        printf("\n%f\t%f\t%f",x1,x2,m);
        if((f(x1)*f(m)) < 0)
            x2 = m;
        else 
            x1 = m; 
    }while(fabsf((x2-x1)/x2) > e );
    return m;
}

int main()
{
    float a,b,e;
    printf("Enter the initial values : ");
    
    while(1)
    {
        scanf("%f%f",&a,&b);
        if((f(a)*f(b)>0))
        {
            printf("\nRe-enter the valid initial values : ");
        }
        else
            break;
    }
    printf("Enter tolorable error : ");
    scanf("%f", &e);
    printf("\nThe root is %f.",bisection(a,b,e));
    return 0;
}
#include <stdio.h>
#include <math.h>
#define f(x,y) x*x + x*y - 6
#define g(x,y) x*x - y*y -3
#define f1(x,y) 2*x +y
#define f2(x,y) y
#define g1(x,y) 2*x
#define g2(x,y) -2*x

int main()
{
    float x, y, x0, y0, x1, y1, e;
    printf("Enter the initial guess x0 and y0: ");
    scanf("%f %f", &x0, &y0);
    printf("Enter the tolerable error : ");
    scanf("%f", &e);
    
    while (fabsf((x1-x0)/x1) > e)
    {
        x = x0 - ( ( (f(x0,y0)*g2(x0,y0)) - (f2(x0,y0)*g(x0,y0)) ) / (f1(x0,y0)*g2(x0,y0) - f2(x0,y0)*g1(x0,y0)) );
        y = y0 - ( ( (f1(x0,y0)*g(x0,y0)) - (f(x0,y0)*g1(x0,y0)) ) / (f1(x0,y0)*g2(x0,y0) - f2(x0,y0)*g1(x0,y0)) );
        printf("x1 = %f, y1 = %f \n", x1, y1);
        x1 = x;
        y1 = y;
    }
    
    printf("The roots are %f and %f.", x1, y1);
    return 0;
}
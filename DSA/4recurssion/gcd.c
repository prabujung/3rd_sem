#include<stdio.h>

int gcd(int a, int b)
{
    if(b!=0)
        return gcd(b, a%b);
    else    
        return a;
}

int main()
{
    int n, m;
    printf("enter two numbers :: ");
    scanf("%d %d", &n, &m);
    printf("the gcd of %d and %d is %d.", n, m, gcd(n,m));
    return 0;
}
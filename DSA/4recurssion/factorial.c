#include<stdio.h>

int fact(int a)
{
    if(a == 1)
        return 1;
    else
        return (a*fact(a-1));
}

int main()
{
    int n;
    printf("enter a number :: ");
    scanf("%d", &n);
    printf("\nFactorial of %d is %d.", n , fact(n));
    return 0;
}
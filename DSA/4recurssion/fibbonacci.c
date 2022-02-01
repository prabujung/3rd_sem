#include<stdio.h>

int fib(int a)
{
    if(a == 1 || a == 2)
        return 1;
    else
        return (fib(a-1)+fib(a-2));
}

int main()
{
    int n;
    printf("Enter a position of a term in fibonacci series you want to display :: ");
    scanf("%d", &n);
    printf("The %dth term of fibbonacci series is %d.",n, fib(n));
    return 0;
}
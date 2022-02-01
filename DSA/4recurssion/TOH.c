#include <stdio.h>

void TOH(int n, char A, char B, char C) //(no. of disk, source, destination, intermediate)
{
    if (n > 0)
    {
        TOH(n - 1, A, C, B);
        printf("Move disk %d from %c to %c\n", n, A, B);
        TOH(n - 1, C, B, A);
    }
}

int main()
{
    int n;
    printf("Enter the number of disk :: ");
    scanf("%d", &n);
    TOH(n, 'A', 'C', 'B');  //source rod = A; destination rod = C; intermediate rod = B;
    return 0;
}
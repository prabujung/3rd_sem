#include <stdio.h>
#include <conio.h>

int main()
{
    int a[5] = {5,4,3,2,1};

    for(int i=1; i < 5; i++)
    {
        int key = a[i];
        int j = i-1;
        for(j; j >= 0 && a[j] > key; j--)
        {
            a[j+1] = a[j];
        }

        a[j+1] = key;
    }

    for(int i=0; i<5; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
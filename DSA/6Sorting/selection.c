#include <stdio.h>
#include <conio.h>

int main()
{
    int a[5] = {5,4,3,2,1};

    for(int i = 0; i < 4; i++)
    {
        int min, n = i;
        for(int j = i+1; j < 5; j++)
        {
            if(a[j] < a[i])
            {
                min = a[j];
                n++;
            }    

        }
        int temp = a[i];
        a[i] = min;
        a[n] = temp;
    }

     for(int i=0; i<5; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
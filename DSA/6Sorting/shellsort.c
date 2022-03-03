#include <stdio.h>
#include <math.h>
int main()
{
    int n, a[5] = {6, 5, 4, 3, 2};
    n = sizeof(a) / sizeof(int);
    for (int gap = n / 2; gap >= 1; gap = gap / 2)
    {
        for (int j = gap; j < n; j++)
        {
            for (int i = j - gap; i >= 0; i = i - gap)
            {
                if (a[i + gap] >= a[i])
                    break;
                else
                {
                    int temp;
                    temp = a[i + gap];
                    a[i + gap] = a[i];
                    a[i] = temp;
                }
            }
        }
    }
    printf("The Sorted array is : ");
    for (int i = 0; i < 5; i++)
    {
        printf("\t%d", a[i]);
    }
    return 0;
}
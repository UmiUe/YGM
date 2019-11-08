#include <stdio.h>
#define N 7

int main()
{
    int a[N] = {2, 4, 7, 3, 9, 1, 6};

    for (int i = 1; i < N; i++)
    {
        int j = i - 1, key = a[i];
        while (j >= 0 && a[j] > key)
        {
            a[j+1] = a[j];
            j--;
        }

        a[j+i]=key;
    }

    for(int i = 0; i < N; i++)
    {    
        printf("%d", a[i]);
    }
    printf("\n");

    return 0;
}
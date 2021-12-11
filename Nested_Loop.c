#include <stdio.h>
int main()
{
    int i, j, k = 5;
    for (i = k; i > 0; i--)
    {
        for (j = i; j > 0; j--)
            printf("%d", i);
        printf("\n");
    }
    return 0;
}

/**
5 Lines


55555
4444
333
22
1

 */
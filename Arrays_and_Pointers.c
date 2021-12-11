#include <stdio.h>
#define SIZE 5

int main()
{
    int a[SIZE] = {12, 4, 8, 15};
    int *aPtr;
    aPtr = a;
    aPtr += 3;
    *aPtr %= 2;
    aPtr--;
    *aPtr /= 2;
    return 0;
}

//Final Contents: {12, 4, 4, 1, 0}
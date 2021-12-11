#include <stdio.h>
#include <math.h>

int main()
{

    int c = 15;
    double n = 7.0, fn1, fn2;

    fn1 = sqrt(3 * n * floor(n / 4) + (c * pow(n, 2)));
    fn2 = sqrt((3 * n * floor(n / 4)) + (c * n * n));

    printf("fn1: %f\n", fn1);
    printf("fn2: %f\n", fn2); 

    return 0;
}
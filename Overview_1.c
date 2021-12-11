#include <stdio.h>
#define IN_TO_CM 2.54 /* this program converts inches to centimeters */

int main()
{
    double in, cm;

    printf("Enter the length in inches \n>");
    scanf("%lf", &in);

    cm = in * IN_TO_CM;

    printf("%.2f inches = %.2f centimeters \n", in, cm);
    return 0;
}
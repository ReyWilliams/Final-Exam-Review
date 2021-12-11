#include <stdio.h>

double math_stuff(double h, int k);
int main()
{
    int num1 = 7;
    double num2, num3;
    num3 = math_stuff(3.2, 2);
    printf("num3 if %f", num3); 
}
double math_stuff(double h, int k) 
{ return h * k / 10.0; }
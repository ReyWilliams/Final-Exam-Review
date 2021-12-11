#include <stdio.h>

int main()
{
    char fruit;
    int papaya, banana, mango;

    if (fruit == 'p' || fruit == 'P')
        papaya++;
    else if (fruit == 'b' || fruit == 'B')
        banana++;
    else if (fruit == 'm' || fruit == 'M')
        mango++;
    else
        printf("Invalid entry\n");

    switch (fruit)
    {
    case 'p':
    case 'P':
        papaya++;
        break;
    case 'b':
    case 'B':
        banana++;
        break;
    case 'm':
    case 'M':
        mango++;
        break;
    default:
        printf("Invalid entry\n");
    }

    /**
     * True or False: You can use a switch statement on type int,char, and double.14COP 2220 
         * False, only int and char not double.  
     */

    return 0;
}
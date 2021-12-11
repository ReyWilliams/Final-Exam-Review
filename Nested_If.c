#include <stdio.h>

int main()
{
    int number = 2;
    if (number > 6)
        if (number > 12)
            printf("You're close!\n");
        else
            printf("Sorry, you lose a  turn!\n");
    else
        printf("Testing\n");

    return 0;
}
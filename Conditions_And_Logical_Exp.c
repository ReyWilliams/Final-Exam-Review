#include <stdio.h>
#include <stdbool.h>

int main()
{
    int rah = 17, nom = 2, tot = 9;
    bool result_1 = nom != 3 || tot < 7 && rah >= 10;
    bool result_2 = nom == 3 && tot >= 7 || rah < 10;
    /**
     * Complement nom == 3 && tot >= 7 || rah < 10
     */

    if (result_1)
    {
        printf("result_1 is true.\n");
    }
    else
    {
        printf("result_1 is false.\n");
    }

    //should be different
    
    if (result_2)
    {
        printf("result_2 is true.\n");
    }
    else
    {
        printf("result_2 is false.\n");
    }

    return 0;
}
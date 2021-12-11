#include <stdio.h>
#include <string.h>

int checkPal(char s[])
{
    int i = 0;
    int j = strlen(s) - 1;

    while (i < j)
    {

        if (s[i] != s[j])
        {
            return 0;
        }
        else
        {
            i++;
            j--;
        }
    }

    return 1;
}

int checkPal(char s[])
{
   if(strlen(s) <= 1){
       return 1;
   }

    if(s[0] == s[strlen(s) -1]){
        checkPal()
        return true;
    }else{
        return 0;
    }
}



int main(int argc, char const *argv[])
{
    printf("result is %d", checkPal("racecar"));
    return 0;
}

#include <stdio.h>
#define SIZE 10
int main()
{
    int i, fib[SIZE] = {0, 1};

    for (i = 2; i < SIZE; i++)
        fib[i] = fib[i - 2] + fib[i - 1];


    for(int i = 0; i < SIZE; i++){
        printf("%d ", fib[i]);
    }
    return 0;
}

// 0 1 

// fib[n] = fib[n-1] + fib[n-2]
// n >= 2

// fib[2] = fib[1] + fib[0]
                1       0
// fib[3] = fib[2] + fib[1]
                1       1

//0 1 1 2 3 5 8 13 21 34
// Sum of numbers ocuuring in multiplication table of 8

#include <stdio.h>

int main()
{
    printf("** Multiplication table of 8 **\n\n");
    int n = 8, sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        printf("8 x %d = %d\n", i, 8 * i);
        printf("sum = (8 * %d) + %d = %d\n\n", i, i, sum = (8 * i) + i);
    }
    return 0;
}


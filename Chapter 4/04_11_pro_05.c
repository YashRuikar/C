// Sum of first 10 natural number using while loop

#include <stdio.h>

int main()
{
    int i=1, sum = 0, n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    // for (i = 0; i <= n; i++)  program was to do with while loop
    // {
    //     sum += i;
    // }

    while (i<=n)
    {
        sum +=i;
        i++;
    }
    printf("The value of sum is %d", sum);
    return 0;
}



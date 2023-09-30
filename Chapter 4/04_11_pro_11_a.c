// Number is prime or not using while loop

#include <stdio.h>

int main()
{
    int i = 2, n, prime = 1;
    printf("Enter the number to check whether it is prime or not\n");
    scanf("%d", &n);
    if (n == 0 || n == 1)
    {
        prime = 0;
    }

    while (i <= n / 2)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
        i++;
    }

    if (prime == 0 && n != 2)
    {
        printf("This is not a prime number");
    }
    else
    {
        printf("This is a prime number");
    }
    return 0;
}
// Number is prime or not

#include <stdio.h>

// prime number = ekada number jo parat divied hot nahi
// Ani point madhe nahi phaje value as 7 is not divisble
// Also this is not the best method to solve the problem

int main()
{
    int i, n, prime = 1;
    printf("Enter the number\n");
    scanf("%d", &n);
    if (n == 0 || n == 1)
    {
        prime = 0;
    }
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
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
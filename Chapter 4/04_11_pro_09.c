// Factorial of given number using while loop

#include <stdio.h>

int main()
{
    int i = 1, n, factorial = 1;
    printf("Enter the number whose factorial is to be calculted\n");
    scanf("%d", & n);
    while (i <= n)
    {
        factorial *= i;
        i++;
    }
    printf("The value of factorial of %d is %d", n, factorial);
    return 0;
}
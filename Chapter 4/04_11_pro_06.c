#include <stdio.h>

int main()
{
    int i = 1, n, sum = 0;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    do
    {
        sum += i;
        i++;
    } while (i <= n);
    printf("The value of sum (1 to 10) is %d", sum);
    return 0;
}
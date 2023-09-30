// Fibonaccci Series

#include <stdio.h>
int fibo(int x);
int main()
{
    int a;
    printf("Enter the value of a\n");
    scanf("%d", &a);
    printf("The value of fibonacci series is %d", fibo(a));
    return 0;
}

int fibo(int x)
{ //Global condtion of number of 1 and 2
    if (x == 1)
    {
        return 0;
    }
    if (x == 2)
    {
        return 1;
    }
    else
    {
        return (x - 1) + (x - 2);
    }
}
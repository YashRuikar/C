#include <stdio.h>
int sum(int x);
int main()
{
    int a;
    printf("Enter the value of a\n");
    scanf("%d", &a);
    printf("The sum of natural number is %d", sum(a));
    return 0;
}
int sum(int x)
{
    int s = 0, i, n;
    for (i = 1; i <= n; i++)
    {
        s = s + i;
    }
    return s;
}
#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("YOU CAN DRIVE THE CAR");
    }
    else
    {
        printf("YOU CAN'T DRIVE THE CAR");
    }
    return 0;
}
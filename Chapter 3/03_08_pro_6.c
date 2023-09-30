// Gretest among 4 numbers 
// Not finished

#include <stdio.h>

int main()
{
    int num1, num2, num3, num4;
    printf("Enter value of num1\n");
    scanf("%d", &num1);

    printf("Enter value of num2\n");
    scanf("%d", &num2);

    printf("Enter value of num3\n");
    scanf("%d", &num3);

    printf("Enter value of num4\n");
    scanf("%d", &num4);
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            if (num1 > num4)
            {
                printf("Num1 is gretest from all among\n");
            }
            else
            {
                printf("Num4 is gretest from all among\n");
            }
        }
        else
        {
            printf("Num3 is gretest from all among\n");
        }
    }
    else
    {
        printf("Num2 is gretest from all among\n");
    }
    

    return 0;
}
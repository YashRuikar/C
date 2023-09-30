#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);
    if (age >= 90)
    {
        printf("You are above 90, you cannot drive");
    }
    else
    {
        printf("You can drive\n");
    }


if(age==50)
{
    printf("Half Century\n");
}
    return 0;
}


// #include<stdio.h>
// int main()
// {
//     int age ;
//     printf("Enter your age: ");
//     scanf("%d", & age);
//     if (age >=18 && age <= 75)
//     {
//         printf("You can drive the car");
//     }
//     else
//     {
//         printf("You cannot drive the car");
//     }

//     return 0;  
// }


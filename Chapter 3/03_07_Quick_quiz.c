// #include <stdio.h>

// int main()
// {
//     int grade;
//     printf("Enter your grade\n");
//     scanf("%d", &grade);
//     if (grade >= 90 && grade <= 100)
//     {
//         printf("You are having A grade\n");
//     }
//     else if (grade >= 80 && grade <= 90)
//     {
//         printf("You are having B grade\n");
//     }
//     else if (grade >= 70 && grade <= 80)
//     {
//         printf("You are having C grade\n");
//     }
//     else if (grade >= 60 && grade <= 70)
//     {
//         printf("You are having D grade\n");
//     }
//     else if (grade >= 50 && grade <= 60)
//     {
//         printf("You are having F grade\n");
//     }
//     else
//     {
//         printf("You should not study do some kind of Business");
//     }
//     return 0;
// }


#include <stdio.h>

int main()
{
    int grade;
    printf("Enter your grade\n");
    scanf("%d", & grade);

    if (grade >= 90 && grade <= 100)
    {
        printf("You are having A grade");
    }
    else if (grade >= 80 && grade <= 90)
    {
        printf("You are having B grade");
    }
    else if (grade >= 70 && grade <= 80)
    {
        printf("You are having C grade");
    }
    else if (grade >= 60 && grade <= 70)
    {
        printf("You are having D grade");
    }
    else if (grade >= 50 && grade <= 60)
    {
        printf("You are having F grade");
    }
    else
    {
        printf("Try again next year");
    }
    return 0; 
}
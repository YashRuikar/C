// // Student should requires total 40% and at least 33% in each subject

// #include <stdio.h>

// int main()
// {
//     int physics, chemistry, maths;
//     float total;
//     printf("Enter physics marks\n");
//     scanf("%d", &physics);

//     printf("Enter chemistry marks\n");
//     scanf("%d", &chemistry);

//     printf("Enter maths marks\n");
//     scanf("%d", &maths);
//     total = (physics + maths + chemistry) / 3;
//     if (total > 40 && physics > 33 && maths > 33 && chemistry > 33)
//     {
//         printf("Your total percentage is %f and you are pass\n", total);
//     }
//     else
//     {
//         printf("Your total percentage is %f and you are fail\n", total);
//     }
//     return 0;
// }


#include <stdio.h>

int main()
{
    int maths, physics, chemistry;
    float total;

    printf("Enter maths mark\n");
    scanf("%d", & maths);

    printf("Enter physics mark\n");
    scanf("%d", & physics);

    printf("Enter chemistry mark\n");
    scanf("%d", & chemistry);

    total = (maths + physics + chemistry) / 3;

    if (total > 40 && maths > 33 && physics > 33 && chemistry >33)
    {
        printf("Your total percentage is %f and you are pass\n", total);
    }
    else
    {
        printf("Your total percentage is %f and you are fail\n", total);
    }
    return 0; 
}
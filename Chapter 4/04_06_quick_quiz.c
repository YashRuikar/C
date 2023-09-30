// #include <stdio.h>

// int main()
// {
//     int i = 0;
//     int n;
//     printf("Enter the value of n\n");
//     scanf("%d", &n);
//     do
//     {
//         printf("The value of i is %d\n", i + 1);
//         i++;
//     } while (i < n);

//     return 0;
// }


#include <stdio.h>

int main()
{
    int i = 1, n;
    printf("Enter the value of n\n");
    scanf("%d", & n);
    do
    {
        printf("The natural number is %d\n", i);
        i++;
    }while(i<=n);
    return 0; 
}
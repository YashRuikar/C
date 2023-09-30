// #include <stdio.h>

// int main()
// {
//     int i = 0;
//     do
//     {
//         printf("The value of i is %d\n", i);
//         if (i == 5)
//         {
//             break;
//         }
//         i++;
//     } while (i < 10);

//     return 0;
// }


#include <stdio.h>

int main()
{
    int i;
    for (i = 0; i<100; i++)
    {
        printf("%d\n", i);

        if(i == 5)
        {
            break;
        }
    }
    return 0; 
}


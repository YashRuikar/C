// #include <stdio.h>

// int main()
// {
//     int a;
//     int b;
//     printf("Enter the value of a \n");
//     scanf("%d", &a);
//     printf("Enter the value of b \n");
//     scanf("%d", &b);

//     printf("The sum of a and b is %d", a + b);
//     return 0;
// }

// // Answer
// // The value of a is 4
// // The value of b is 8.5
// // The value of c is u
// // The sum of a and d is 49
// // The sum of a and d is 49

// // program for addtion of two numbers

// # include<stdio.h>
// int main()
// {
//     int a=10;
//     int b=20;
//     int c=a+b;
//     printf("The sum of a and b is %d \n",c);
//    return 0;
// }

// //Answer
// //The sum of a and b is 30

// // program for subtraction of two numbers

// #include <stdio.h>
// int main()
// {
//     int p, q;
//     printf("Enter the value of p & q\n");
//     scanf("%d %d", & p, & q);
//     int r= p-q;
//     printf("The subtraction of two numbers is =%d \n", p-q);
//    return 0;
//  }

// Enter the value of p & q
// 100
// 50
// The subtraction of two numbers is =50

// Multiplication of two numbers

// # include<stdio.h>
// int main()
// {
//     int a,s,d;
//     printf("Enter the value of a and s");
//     scanf("\n %d \n %d", &a, &s);
//     d=a*s;
//     printf("The multiplication of two numbers is %d \n",d);
//     if (d==10)
//     {
//         printf("Sucessful");
//     }
//     else
//     {
//         printf("Unscessful");
//     }
//    return 0;
//  }

// Enter the value of a and s10
// 20
// The multiplication of two numbers is 200

#include <stdio.h>
int main()
{
    int x, y, z;
    printf("Enter the value of a\t");
    scanf("%d", &x);
    printf("Enter the value of y\t");
    scanf("%d", &y);

    z = x * y;
    printf("Multiplication of x and y is %d\n", z);

    if (z == 10)
    {
        printf("Successful");
    }
    else
    {
        printf("Unsuccessful");
    }
}
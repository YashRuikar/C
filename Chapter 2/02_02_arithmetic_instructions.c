#include <stdio.h>

int main()
{
    int a = 8;
    int b = 2;
    int z;
    z = b * a; // legal
               // b*a=z // Illegal
    printf("The value of z is %d\n", z);
    printf("The value of a+b is %d\n", a + b);
    printf("The value of a-b is %d\n", a - b);   
    printf("The value of a*b is %d\n", a * b);
    printf("The value of a/b is %d\n", a / b);
    printf("5 when divided by 2 leaves a remainder of %d\n", 5 % 2);
    printf("-5 when divided by 2 leaves a remainder of %d\n", -5 % 2);
    printf("5 when divided by -2 leaves a remainder of %d\n", 5 % -2);
   
   
   printf("the value of 6+5 is %d\n",6+5);
   printf("the value of 6.1+5.6 is %f\n",6.1+5.6);
   printf("the value of 5/2 is %d\n",5/2);
   printf("the value of 2/5 is %d\n",2/5);
   printf("the value of 3.0/9 is %f\n",3.0/9);



    return 0;
}
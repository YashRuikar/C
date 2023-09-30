// #include <stdio.h>
// // sum is a function which takes a and b as input and returns an integer as an output
// int sum(int a, int b); // functon prototype declaration
// int main()
// {
//     int result;
//     result = sum(2, 5); //function call
//     printf("The value of result is %d", result);
//     return 0;
// }

// int sum(int a, int b)
// {
//     int result;
//     result = a + b;
//     return result;
// }


#include <stdio.h>
int sum(int a, int b);

int main()
{
    int result;
    result = sum(2, 10);
    printf("The value of result is %d\n", result);
    return 0; 
}

int sum(int a, int b)
{
    int result;
    result = a + b;
    return result;
}
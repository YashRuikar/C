#include <stdio.h>

int main()
{
    int a = 3;
    printf("%d %d %d", a, ++a, a++); // Operation starts from right to left i.e from a++ --> ++a --> a
    return 0;
}
// Lowercase or not

#include <stdio.h>

int main()
{
    // 97-122= a to z ASCII VALUES
    char ch;
    printf("Enter the character\n");
    scanf("%c", &ch);
    if (ch <= 122 && ch >= 97)
    {
        printf("It is lowercase\n");
    }
    else
    {
        printf("It is not lowercase\n");
    } 
    return 0;
}


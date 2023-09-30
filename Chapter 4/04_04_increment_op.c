#include <stdio.h>

int main()
{
    int i = 5;
    printf("The value after i++ is %d\n", i++);
    // i++ ---> Pehle print kare fir increment kare
    //  ++i ---> pehle increment kare fir print kare
    printf("The value of i is %d\n", i);
    
    i += 10;   //-->Increments i by 10
    printf("The value of i is %d\n", i);
    return 0;
}
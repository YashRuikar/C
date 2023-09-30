// Convert temperature of celsius into fahrenheihr

#include <stdio.h>
float convert(float celsius);
int main()
{
    float celsius, fahrenheit;
    printf("Enter the value of tempeartuer in celsius\n");
    scanf("%f", &celsius);
    printf("The value of this celsius temperature to fahrenheit temperature is %f", convert(celsius));
    return 0;
}

float convert(float celsius)
{
    float fahrenheit = (celsius * 9 / 5) + 32;
    return fahrenheit;
}

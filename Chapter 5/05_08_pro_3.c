// Calculate value of force in newton with help of mass

#include <stdio.h>
float force(float mass);
int main()
{
    float mass;
    printf("Enter the value of mass in kgs\n");
    scanf("%f", &mass);
    printf("The value of force in newton is %.2f\n", force(mass));
    return 0;
}
    float force(float mass)
    {
        float result = mass * 9.8;
        return result;
    }
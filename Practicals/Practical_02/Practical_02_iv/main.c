#include <stdio.h>

int main()
{
    float c,f;
    printf("Enter the value in Fahrenheit: ");
    scanf("%f",&f);
    c=5*(f-32)/9;
    printf("The celsius value is %.2f.",c);
    return 0;
}

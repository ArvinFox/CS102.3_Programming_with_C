#include <stdio.h>

int main()
{
    float n1,n2,avg;
    printf("Enter the 2 numbers: ");
    scanf("%f, %f",&n1,&n2);

    avg=(n1+n2)/2;
    printf("The average is %.2f",avg);
    return 0;
}

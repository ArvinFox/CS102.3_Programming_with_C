#include <stdio.h>

int main()
{
    float dt,tt,avgs;
    printf("Enter the Distance Traveled: ");
    scanf("%f",&dt);
    printf("Enter the Time Taken: ");
    scanf("%f",&tt);
    avgs=(dt/tt);
    printf("The average speed is %.2f.",avgs);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Using if condition & else condition.

    int n1,ans;
    printf("Enter a number: ");
    scanf("%d",&n1);
    ans=n1%2;
    if (ans==0)
    printf("The number you entered is an even number.");
    else
    printf("The number you entered is an odd number.");
    printf("\n\n");

    //Using switch.

    int n2,ans1;
    printf("Enter a number: ");
    scanf("%d",&n2);
    ans1=n2%2;
    switch(ans1)
    {
        case 0:printf("The number you entered is an even number.");break;
        default:printf("The number you entered is an odd number.");
    }
}


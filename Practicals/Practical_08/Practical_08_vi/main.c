#include <stdio.h>
#include <stdlib.h>

void mix(int a,int b)
{
    printf("*The sum is %d.\n*Difference is %d.\n*Product is %d.",a+b,a-b,a*b);
}
int main()
{
    int x,y;
    printf("**Enter two numbers: ");
    scanf("%d, %d",&x,&y);
    mix(x,y);
}

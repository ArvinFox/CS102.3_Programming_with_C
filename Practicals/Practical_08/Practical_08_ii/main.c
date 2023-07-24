#include <stdio.h>
#include <stdlib.h>

void diff_sum(int a,int b)
{
    printf("The sum is %d.\n",a+b);
    printf("The difference is %d.",a-b);
}
int main()
{
    int n1,n2;
    printf("Enter two numbers: ");
    scanf("%d, %d",&n1,&n2);
    diff_sum(n1,n2);
}

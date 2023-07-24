#include <stdio.h>
#include <stdlib.h>

void sum()
{
    int n1,n2;
    printf("**Enter two numbers: ");
    scanf("%d, %d",&n1,&n2);
    printf("*The sum is %d.\n\n",n1+n2);
}
int main()
{
    sum();
    sum();
    sum();
}

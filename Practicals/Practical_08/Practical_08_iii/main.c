#include <stdio.h>
#include <stdlib.h>

int product(int a,int b)
{
    return a*b;
}
int main()
{
    int n1,n2;
    printf("**Enter two numbers: ");
    scanf("%d, %d",&n1,&n2);
    printf("*The product is %d.\n",product(n1,n2));
}

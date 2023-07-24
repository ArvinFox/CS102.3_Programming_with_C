#include <stdio.h>
#include <stdlib.h>

int quot(int a,int b)
{
    return a/b;
}
int main()
{
    int n1,n2;
    printf("**Enter two numbers: ");
    scanf("%d, %d",&n1,&n2);
    printf("*The quotient is %d.\n",quot(n1,n2));
}

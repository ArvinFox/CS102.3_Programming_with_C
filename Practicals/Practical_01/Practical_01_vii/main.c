#include <stdio.h>

int main()
{
    int n1,n2,temp;
    printf("Enter two numbers: ");
    scanf("%d,%d",&n1,&n2);
    printf("Before swap: %d, %d \n",n1,n2);
    temp=n1;
    n1=n2;
    n2=temp;
    printf("After swap: %d, %d \n",n1,n2);
    return 0;
}

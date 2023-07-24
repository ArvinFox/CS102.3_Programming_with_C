#include <stdio.h>
#include <stdlib.h>

double product(int a,float b)
{
    return a*b;
}
int main()
{
    int x;
    float y;
    printf("Enter two numbers: ");
    scanf("%d, %f",&x,&y);
    printf("The product is %lf.",product(x,y));
}

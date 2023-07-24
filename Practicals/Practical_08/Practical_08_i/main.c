#include <stdio.h>
#include <stdlib.h>

void diff_sum()
{
    int x,y,sum,diff;
    printf("**Enter two numbers: ");
    scanf("%d, %d",&x,&y);
    sum=x+y;
    diff=x-y;
    printf("\n*The sum is %d.\n",sum);
    printf("*The difference is %d.\n",diff);
}
int main()
{
    diff_sum ();
}

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a1[5],a2[5],i,pdt[5];
    for (i=0;i<5;i++)
    {
        printf("**Input values to array 1 = ");
        scanf("%d",&a1[i]);
        printf("**Input values to array 2 = ");
        scanf("%d",&a2[i]);
        printf("\n");
        pdt[i]=a1[i]*a2[i];
    }
    for(i=0;i<5;i++)
    printf("%d ",pdt[i]);
}

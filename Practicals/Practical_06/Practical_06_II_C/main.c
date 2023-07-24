#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a1[5],a2[5];
    int x,pdt[5],tot=0;
    for (x=0;x<5;x++)
    {
        printf("**Input values to array 1 = ");
        scanf("%d",&a1[x]);
        printf("**Input values to array 2 = ");
        scanf("%d",&a2[x]);
        printf("\n");
        pdt[x]=a1[x]*a2[x];
    }
    for (x=0;x<5;x++)
    {
        printf("/n%d",pdt[x]);
        tot=tot+pdt[x];
    }
    printf("\n\n**The total is %d.\n",tot);
}

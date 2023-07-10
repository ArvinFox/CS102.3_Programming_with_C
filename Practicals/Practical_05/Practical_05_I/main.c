#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ary[10],max,min,tot=0,avg;
    int x;
    printf("**Enter element 1: ");
    scanf("%f",&ary[0]);
    min=ary[0];
    max=ary[0];
    tot+=ary[0];
    for(x=1;x<10;x++)
    {
        printf("**Enter element %d: ",x+1);
        scanf("%f",&ary[x]);
            tot=tot+ary[x];
        if(ary[x]>max)
            max=ary[x];
        if (ary[x]<min)
            min=ary[x];
    }
        avg=tot/10.0;
    printf("\n\n*The average is %.2f.",avg);
    printf("\n*The highest is %.2f.",max);
    printf("\n*The lowest is %.2f",min);
    printf("\n\n*The reverse order of these elements are: ");

    for(x=10;x>0;x--)
    {
        printf("%.2f ",ary[x]);
    }
}

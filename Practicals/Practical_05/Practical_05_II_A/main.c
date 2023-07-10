#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr1[5],arr2[5];
    int i,sum[5];
    for (i=0;i<5;i++)
    {
        printf("**input values to array 1 = "); scanf("%d",&arr1[i]);
        printf("**input values to array 2 = "); scanf("%d",&arr2[i]);
        sum[i]=arr1[i]+arr2[i];
        printf("\n");
    }
    for (i=0;i<5;i++)
        printf("\n***%d + %d = %d\n",arr1 [i],arr2[i],sum[i]);
}


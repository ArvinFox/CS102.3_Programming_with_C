#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,C[3][3];
    int A[3][3]={3,2,4,1,4,6,4,3,2};
    int B[3][3]={2,6,3,4,3,2,5,1,7};
    for (x=0;x<3;x++)
    {
        for (y=0;y<3;y++)
        {
            C[x][y]=A[x][y]+B[x][y];
        }
    }
    printf("**The sum is: \n\n");
    for (x=0;x<3;x++)
    {
        for (y=0;y<3;y++)
        {
           printf("%4d ",C[x][y]);
        }
        printf("\n");
    }
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Making a Basic Calculator.
    int tool;
    float n1,n2;
    printf("Enter two numbers: ");
    scanf("%f,%f",&n1,&n2);
    printf("\n");
    printf("Enter the method you want to use: \n\n");
    printf("Press 1 to Add : (+)\n");
    printf("Press 2 to Multiply : (*)\n");
    printf("Press 3 to Substract : (-)\n");
    printf("Press 4 to Divide : (/)\n\n");
    scanf("%d",&tool);
    printf("\n");
    switch(tool)
    {
        case 1:printf("Answer is %.2f.\n",n1+n2);break;
        case 2:printf("Answer is %.2f.\n",n1*n2);break;
        case 3:printf("Answer is %.2f.\n",n1-n2);break;
        case 4:printf("Answer is %.2f.\n",n1/n2);break;
        default:printf("Invalid Format.%2f.\n");
    }
}

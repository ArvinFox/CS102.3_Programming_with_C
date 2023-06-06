#include <stdio.h>

int main()
{
    int integer;
    float flo;
    double dou;
    char chr;

    printf("Input Integer: ");
    scanf("%d",&integer);
    printf("Input float value: ");
    scanf("%f",&flo);
    printf("Input double value: ");
    scanf("%lf",&dou);
    printf("Enter a character: ");
    scanf(" %c",&chr);

    printf("\n");
    printf("You entered %c. \n", chr);
    printf("Integer value is %d. \n",integer);
    printf("Float value is %f. \n",flo);
    printf("Double value is %lf. \n",dou);
    return 0;
}

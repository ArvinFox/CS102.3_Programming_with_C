#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r;
    double pi=3.14;
    char tool;
    printf("Enter the radius of the circle or sphere: ");
    scanf("%f",&r);
    printf("\n");
    printf("Select the option you want: \n");
    printf("* Press 'c' to find circumference of a circle.\n");
    printf("* Press 'a' to find area of a circle.\n");
    printf("* Press 'v' to find volume of a sphere.\n\n");
    printf("**Enter the option: ");
    scanf("%s",&tool);
    printf("\n");
    switch(tool)
    {
        case 'c':printf("***%.2f is the circumference of the circle.\n",2.0*pi*r);break;
        case 'a':printf("***%.2f is the area of the circle.\n",pi*r*r);break;
        case 'v':printf("***%.2f is the volume of the sphere.\n",(4.0/3.0)*pi*r*r*r);break;
        default:printf("***The input is invalid.\n");
    }



}

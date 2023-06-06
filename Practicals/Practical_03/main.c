#include <stdio.h>
#include <stdlib.h>

int main()
{/*
    //Question 01

    int n1,n2;
    printf("Enter two numbers: ");
    scanf("%d,%d",&n1,&n2);
    if (n1<n2)
        printf("The highest number is %d.\n",n2);
    else
        printf("The highest number is %d.\n",n1);
    printf("\n\n");

    //Question 02

    int n3,n4,n5,max,min;
    printf("Enter three numbers: ");
    scanf("%d,%d,%d",&n3,&n4,&n5);
    max=n3;
    if (n4>max)
    max=n4;
    if (n5>max)
    max=n5;
    printf("The Largest number is %d.\n",max);

    min=n3;
    if (n4<min)
    min=n4;
    if (n5<min)
    min=n5;
    printf("The Smallest number is %d.\n",min);

    printf("\n\n");

    //Question 03

    float ns,bs,in;
    char en[20];
    printf("Enter employee name: ");
    scanf("%s",&en);
    printf("Input employee basic salary: ");
    scanf("%f",&bs);
    printf("\n");
    if (5000<=bs<10000)
        in=10;
    else if (bs>=10000)
        in=15;
    else
        in=5;
    in=(bs/100)*in;
    ns=bs+in;
    printf("%s's new salary is Rs.%.2f.",en,ns);
    printf("\n\n");

    //Question 04

    float r,pi;
    printf("Enter the radius of circle: ");
    scanf("%f",&r);
    pi=3.14159;
    printf("The Circumference is: %.2f.\n",(2*pi*r));
    printf("The Diameter is: %.2f.\n",2*r);
    printf("The Area is: %.2f.",(pi*r*r));
    printf("\n\n");

    //Question 05

    int n6,n7,re;
    printf("Enter two numbers: ");
    scanf("%d,%d",&n6,&n7);
    re=n6%n7;
    if (re==0)
        printf("The first number is a multiplication of second number.");
    else
        printf("The first number is not a multiplication of second number.");
    printf("\n\n");

    //Question 06

    char value;
    printf("Enter a character: ");
    scanf("%c",&value);
    printf("The integer value of %c is %d.",value,value);
    printf("\n\n");

    //Question 07
*/
    int seyears;
    float basic,monthly,grossremu;
    char cty;

    printf("Enter 'C' if you work in Colombo (else enter 'N'): ");
    scanf("%c", &cty);
    printf("Enter your basic salary: ");
    scanf("%f", &basic);
    printf("Enter your years of service: ");
    scanf("%d", &seyears);
    printf("Enter your monthly sales: ");
    scanf("%f", &monthly);

    if (seyears>5)
        grossremu=basic+(monthly*0.10);
    else
        grossremu=basic;
    if (cty=='C')
        grossremu=grossremu+2500;
    if (monthly<25000)
        grossremu=grossremu+(monthly*0.10);
    else if (monthly<50000)
        grossremu=grossremu+(monthly*0.12);
    else
        grossremu=grossremu+(monthly*0.15);
    printf("Gross monthly remuneration = Rs. %.2f \n",grossremu);
}

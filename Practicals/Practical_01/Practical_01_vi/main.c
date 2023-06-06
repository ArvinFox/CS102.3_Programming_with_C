#include <stdio.h>

int main()
{
    int byear,age;
    char name[20];
    printf("Enter the student name: ");
    scanf("%s",&name);
    printf("Enter the birth year: ");
    scanf("%d",&byear);
    age=2023-byear;
    printf("%s's age is %d.",name,age);
    return 0;
}

#include<stdio.h>
void main()
{
    int age;
    printf("Enter Value of Year ");
    scanf("%d", &age);
    printf("Year : %d \n", age);

    if(age>18 &&  age>0) // && for and , || for Or
    {
        printf("You are aligible for Driving \n");
    }
    else
    {
        printf("You are not  aligible for Driving \n");

    }

}
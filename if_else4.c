// write a program to check given year is leap year or not .
#include<stdio.h>
void main()
{
    int year;
    printf("Enter Value of Year : ");
    scanf("%d", &year);

    printf("Year : %d \n", year);

    
    if((year%4)==0)
    {
        printf("Given Year is Leap Year \n");
    }
    else
    {
        printf("Given Year is not a Leap Year \n");
    }

    printf("Good bye \n");
    
}
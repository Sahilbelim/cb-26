#include<stdio.h>
void main()
{
    int number, f_number, l_number;

    printf("Enter Value of Number :");
    scanf("%d", &number);//25

    printf("Value of number : %d \n", number);
    f_number = number / 10;
    printf("First Number : %d \n", f_number);
    l_number = number % 10;
    printf("Last Number : %d\n", l_number);
}
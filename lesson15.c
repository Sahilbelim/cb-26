#include<stdio.h>
void main()
{
    int number ,first_number,last_number;
    number = 75;

    first_number =number/10 ; //7.5 =7
    last_number = number % 10; //5
    // last_number = number -(first_number*10);
    printf("Value of Number %d \n", number);
    printf("First Number : %d \n", first_number);
    printf("Lasr Number : %d \n", last_number);

}
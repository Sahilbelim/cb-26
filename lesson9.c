// write a program to swap two number 
#include<stdio.h>
void main()
{
    int num1, num2,temp;

    num1 = 50;
    num2 = 70;

    printf("Befor Value of number 1 %d \n", num1);

    printf("Befor Value of number 2 %d \n", num2);

    temp = num1;

    num1 = num2; //num1=20

    num2 = temp;

    printf("After Value of number 1 %d \n", num1);
   
    printf("After Value of number 2 %d \n", num2);
}
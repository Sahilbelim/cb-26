#include<stdio.h>
void main()
{
    int number1, number2;

    number1 = 50;
    number2 = 70;

    printf("Befor Value of number 1 : %d \n",number1);
    printf("Befor Value of number 2 : %d \n", number2);

    number1 = number1 + number2; //number1=10  number2=20 -> 10+20 >> number1+number2 = 30 number1=30
    number2 = number1 - number2; //number1=30  number2=20 -> 30-20 >> number1-number2 = 10 number2=10
    number1 = number1 - number2; //number1=30  number2=10 -> 30-10 >> number1-number2 = 20 nubmber1=20

    printf("\nAfter Value of number 1 : %d \n", number1);
    printf("After Value of number 2 : %d \n", number2);
}

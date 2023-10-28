#include<stdio.h>
void main()
{
    int number1, number2;
    printf("Enter Value of number 1 : ");
    scanf("%d", &number1);
    printf("Enter Value of number 2 : ");
    scanf("%d", &number2);

    // printf("Value of Number 1 : %d \n", number1);
    // printf("Value of Number 2 : %d \n", number2);

    if(number1 >number2)
    {
        printf("Number 1 is Greater then number 2 \n");
    }
    else
    {
        printf("Number 2 is Greater then number 1 \n");

    }

    printf("Good Bye \n");
}
// write a to check Which number is Big.get 3 number from user.
#include<stdio.h>
void main()
{
    int number1, number2, number3;

    printf("Enter Value of number 1 ");
    scanf("%d", &number1);
    printf("Enter Value of number 2 ");
    scanf("%d", &number2);
    printf("Enter Value of number 3 ");
    scanf("%d", &number3);

    printf("Value of number 1 : %d \n", number1);
    printf("Value of number 2 : %d \n", number2);
    printf("Value of number 3 : %d \n", number3);

//    20,30,10

    if(number1>number2)
    {
        if(number1>number3)
        {
            printf("Number 1 is Big \n");
        }
        else
        {
            
            printf("Number 3 is Big \n");
        }
    }
    else
    {
        if(number2>number1)
        {
            if(number2>number3)
            {
            printf("Number 2 is Big \n");
                
            }
            else
            {
            printf("Number 3 is Big \n");

            }
        }
    }
}
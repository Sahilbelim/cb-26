// write a program to check given number is even or Odd .
#include<stdio.h>
void main()
{
    int number;
    printf("Enter Value of Number : ");
    scanf("%d", &number);

    printf("Value of Number %d \n", number);

    if((number%2)==0)
    {
        if(number==0)
        {
            printf("Number is Zero\n");
        }
        else
        {

        printf("Given number is Even \n");

        }

    }
    else
    {
        printf("Given number is Odd \n");

    }

    printf("Good Bye");

}
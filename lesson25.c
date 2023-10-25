// write a program to find Qube(ghan)of Given number.
#include<stdio.h>
void main()
{
    int number, qube;

    printf("Enter Value of number : ");
    scanf("%d", &number);

    printf("Value of number : %d \n", number);

    qube = number * number * number;

    printf("Qube of Given number : %d ", qube);


}
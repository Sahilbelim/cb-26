// write a program to find subraction, multiplication, divion and module get input from user using scanf.
#include<stdio.h>
void main()
{
    int number1, number2,ans;

    float fnum1, fnum2,div;

    printf("Enter the Value of Number 1 : ");
    scanf("%d", &number1);
    printf("Enter the Value of Number 2 : ");
    scanf("%d", &number2);

    fnum1 = number1;
    fnum2 = number2;
    printf("Value of Number 1 : %d \n", number1);
    printf("Value of Number 2 : %d \n", number2);

    ans = number1 - number2;

    printf("Subtraction of Given number : %d \n", ans);

    ans = number1 * number2;
    

    printf("Multiplication of Given number: %d \n", ans);

    div = fnum1 / fnum2;

    printf("Division of Given number : %.2f \n", div);

    ans = number1 % number2;

    printf("Module of Given number :  %d\n", ans);
}
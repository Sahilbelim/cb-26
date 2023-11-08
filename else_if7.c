// Write a programe to create a calc
// ->Addition
// ->subtraction
// ->Multiplication
// ->Division
// ->Modulus
// ->Max
// ->Min
// ->Equality
#include <stdio.h>
void main()
{
     int number1, number2;
     int option;
     printf("Enter value of number 1 ");
     scanf("%d", &number1);
     printf("Enter value of number 2 ");
     scanf("%d", &number2);

     printf("\nEnter 1 for addition ");
     printf("\nEnter 2 for subtraction ");
     printf("\nEnter 3 for Multiplication ");
     printf("\nEnter 4 for division ");
     printf("\nEnter 5 for modulus ");
     printf("\nEnter 6 for Max ");
     printf("\nEnter 7 for Min ");
     printf("\nEnter 8 for equality ");
     scanf("%d", &option);

     if (option == 1)
     {
          printf("The value of answer is %d ", number1 + number2);
     }
     else if (option == 2)
     {
          printf("The value of answer is %d ", number1 - number2);
     }
     else if (option == 3)
     {
          printf("The value of answer is %d ", number1 * number2);
     }
     else if (option == 4)
     {
          printf("The value of answer is %d ", number1 / number2);
     }
     else if (option == 5)
     {
          printf("The value of answer is %d ", number1 % number2);
     }
     else if (option == 6)
     {
          if (number1 > number2)
          {
               printf("Number 1 is greater ");
          }
          else if (number2 > number1)
          {
               printf("Number 2 is greater ");
          }
     }
     else if (option == 7)
     {
          if (number1 < number2)
          {
               printf("Number 1 is smaller ");
          }
          else if (number1 > number2)
          {
               printf("Number 2 is smaller ");
          }
     }
     else if (option == 8)
     {
          if (number1 == number2)
          {
               printf("All are same ");
          }
          else
          {
               printf("All are not same ");
          }
     }
     else
     {
          printf("Invalid option ");
     }
}
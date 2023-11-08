// Write a programe to findout which day it is take day from user as number
#include <stdio.h>
void main()
{
     int day = 0;

     printf("Enter value of day ");
     scanf("%d", &day);

     if (day == 1)
     {
          printf("Sunday ");
     }
     else if (day == 2)
     {
          printf("Monday ");
     }
     else if (day == 3)
     {
          printf("Tuesday ");
     }
     else if (day == 4)
     {
          printf("Wednesday ");
     }
     else if (day == 5)
          printf("Thursday ");
     else if (day == 6)
          printf("Friday ");
     else if (day == 7)
          printf("Saturday ");
     else
          printf("It is not a valid number ");
}
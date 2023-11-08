// Write a programe to findout zodiac sign of user
// https://in.pinterest.com/pin/81698180718875314/
#include <stdio.h>
void main()
{
     int month, date;

     printf("Enter value of month ");
     scanf("%d", &month);
     printf("Enter value of date ");
     scanf("%d", &date);

     // if (month == 3 && date >= 21 && date <= 31)
     // {
     //      printf("Your zodaic sign is aries ");
     // }
     // else if (month == 4 && date <= 19 && date >= 1)
     // {
     //      printf("Your zodaic sign is aries ");
     // }

     if ((month == 3 && date >= 21 && date <= 31) || (month == 4 && date <= 19 && date >= 1))
     {
          printf("Your zodaic sign is aries ");
     }
}
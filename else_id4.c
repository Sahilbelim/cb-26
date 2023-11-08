//     January - 31 days
//     February - 28 days in a common year and 29 days in leap years
//     March - 31 days
//     April - 30 days
//     May - 31 days
//     June - 30 days
//     July - 31 days
//     August - 31 days
//     September - 30 days
//     October - 31 days
//     November - 30 days
//     December - 31 days
// Write a programe to findout how many days the given month has
#include <stdio.h>
void main()
{
     int month = 0;

     printf("Enter value of month ");
     scanf("%d", &month);

     if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
     {
          printf("It has 31 days ");
     }
     else if (month == 2)
     {
          printf("It has 28 - 29 days ");
     }
     else
     {
          printf("It has 30 days ");
     }
}
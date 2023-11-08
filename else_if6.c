// Write a programe to findout wether the given year is millineum year or not
// ->1000,2000,3000,4000....
#include <stdio.h>
void main()
{
     int year;

     printf("Enter any year ");
     scanf("%d", &year);

     if (year % 1000 == 0)
     {
          printf("It is millineum year ");
     }
     else
     {
          printf("It is not millineum year ");
     }
}
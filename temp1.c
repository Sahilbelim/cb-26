#include<stdio.h>
void  main()
{
    int year;

    printf("Enter Value of Year : ");
    scanf("%d", &year);

    printf("Value of Given Year : %d \n", year);

   if(( year%4)==0)
   {
        
       printf("Given Year is Leap Year \n");
   }
   else
   {
       printf("Given Year is Not a Leap Year \n");
   }
}
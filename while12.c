#include<stdio.h>
void main()
{
     int number,i,number_of_multiplication;
     i=1;

     printf("Enter Value of table number ");
     scanf("%d",&number);
     printf("Enter Value of number of multiplication ");
     scanf("%d",&number_of_multiplication);

  while(i<=number_of_multiplication)  
   {
      printf(" %d x %d = %d \n",number,i,(number*i));
     i++;
   }
}
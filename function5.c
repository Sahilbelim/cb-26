#include<stdio.h>
void printTable(int number)
{
    int i;
    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d  = %d \n", number, i, (number * i));
    }
}
void main()
{
    int number,i,ch;

 do{ 

    printf("Enter Value of Number : ");
    scanf("%d", &number);

    printTable(number);

    printf("If Continue then Enter 0 ");
    scanf("%d",&ch);

  } while (ch == 0);

}
#include <stdio.h>
void main()
{
    int numbers[10],k;

    printf("Enter Value of number 1 ");
    scanf("%d", &numbers[0]);
    printf("Enter Value of number 2 ");
    scanf("%d", &numbers[1]);
    printf("Enter Value of number 3 ");
    scanf("%d", &numbers[2]);
    printf("Enter Value of number 4 ");
    scanf("%d", &numbers[3]);
    printf("Enter Value of number 5 ");
    scanf("%d", &numbers[4]);
    printf("Enter Value of number 6 ");
    scanf("%d", &numbers[5]);
    printf("Enter Value of number 7 ");
    scanf("%d", &numbers[6]);
    printf("Enter Value of number 8 ");
    scanf("%d", &numbers[7]);
    printf("Enter Value of number 9 ");
    scanf("%d", &numbers[8]);
    printf("Enter Value of number 10 ");
    scanf("%d", &numbers[9]);


    for (k = 0; k <= 9;k++)
    {
        printf("%d ", numbers[k]);
   }
   
}
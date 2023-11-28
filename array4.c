#include <stdio.h>
void main()
{
    int numbers[10],k;

    for (k = 0; k <= 9;k++)
    {
        printf("Enter Value of number %d ",(k+1));
        scanf("%d", &numbers[k]);
      
    }
    // printf("Enter Value of number 2 ");
    // scanf("%d", &numbers[k]);
    // k++;
    // printf("Enter Value of number 3 ");
    // scanf("%d", &numbers[k]);
    // k++;
    // printf("Enter Value of number 4 ");
    // scanf("%d", &numbers[k]);
    // k++;
    // printf("Enter Value of number 5 ");
    // scanf("%d", &numbers[k]);
    // k++;
    // printf("Enter Value of number 6 ");
    // scanf("%d", &numbers[k]);
    // k++;
    // printf("Enter Value of number 7 ");
    // scanf("%d", &numbers[k]);
    // k++;
    // printf("Enter Value of number 8 ");
    // scanf("%d", &numbers[k]);
    // k++;
    // printf("Enter Value of number 9 ");
    // scanf("%d", &numbers[k]);
    // k++;
    // printf("Enter Value of number 10 ");
    // scanf("%d", &numbers[k]);
    // k++;

    for (k = 0; k <= 9;k++)
    {
        printf("%d ", numbers[k]);
   }
   
}
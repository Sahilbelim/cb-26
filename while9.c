#include<stdio.h>
void main()
{
    int number,mul,i;
    i = 1;

    printf("Enter Value of number : ");
    scanf("%d", &number);



    while(i<=10)
    {
        mul = number * i;
        printf("%d x %d = %d \n", number, i, mul);
        i++;
    }



    // mul = number * i;
    // printf("%d x %d = %d \n", number,i,mul);
    // i++;
    // mul = number * i;
    // printf("%d x %d = %d \n", number,i,mul);
    // i++;
    // mul=number * i;
    // printf("%d x %d = %d \n", number,i,mul);
    // i++;
    // mul=number * i;
    // printf("%d x %d = %d \n", number,i,mul);

}
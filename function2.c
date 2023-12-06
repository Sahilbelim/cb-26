#include <stdio.h>

void printsymbol(int n, char sym)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%c", sym);
    }
    printf("\n");
}

void main()
{
    char symbol;
    int number;
    printf("Enter Value of Symbol ");
    scanf("%c", &symbol);
    printf("Enter number of Symbol");
    scanf("%d", &number);

    // printsymbol(35, '+');
    printsymbol(number, symbol);
    printf("\tName : Sahil Belim \n");
    printsymbol(number, symbol);

    // for (i = 0; i < number;i++)
    // {
    //     printf("%c", symbol);
    // }
    // printf("\n");
    printsymbol(number, symbol);
    printf("\tAge : 18 \n");
    printsymbol(number, symbol);

    // for(i=0;i<number;i++)
    // {
    //     printf("%c",symbol);
    // }
    // printf("\n");
    printsymbol(number, symbol);
    printf("\tNumber : 9924254332\n");
    printsymbol(number, symbol);
    // for(i=0;i<number;i++)
    // {
    //     printf("%c",symbol);
    // }
    // printf("\n");

    printsymbol(number, symbol);
    printf("\tEmail: Sahil@gmail.com\n");
    printsymbol(number, symbol);

    // for(i=0;i<number;i++)
    // {
    //     printf("%c",symbol);
    // }
    // printf("\n");
}
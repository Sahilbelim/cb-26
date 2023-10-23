#include<stdio.h>
void main()
{
    int a, b,c;

    printf("Enter Value of A ");
    scanf("%d", &a);
    printf("Enter Value of B ");
    scanf("%d", &b);

    printf("Value of A %d\n", a);
    printf("Value of B %d\n", b);
    c = a + b;
    printf("Addition of A & B : %d \n", c);
}
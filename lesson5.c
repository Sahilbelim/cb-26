#include<stdio.h>
void main()
{
    float i = 10, j = 2,div;
    int a, b,c;
    a = 10;
    b = 20;
    c = a + b;//30
    // c = a - b;//-10
    printf("Addition of A and B : %d\n\n", c);

    a = 50;
    b = 70;
    c = a + b;
    printf("Addition of new A and B : %d\n\n", c);

    c = a - b;

    printf("Subtraction of number a and b : %d\n\n", c);

    c = a * b;

    printf("multiplication of number a and b : %d\n\n", c);

    div = i / j;
    printf("Divition of i and j : %.2f\n", div);
}


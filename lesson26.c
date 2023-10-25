// write a program to find area of Triangle.
#include<stdio.h>
void main()
{
    float height, base, area;

    printf("Enter Value of Height : ");
    scanf("%f", &height);
    printf("Enter Value of Base : ");
    scanf("%f", &base);

    printf("Value of Height : %.2f\n", height);
    printf("Value of Base : %.2f\n", base);

    area = (height * base) / 2;

    printf("Area of Triangle : %.4f \n", area);
}
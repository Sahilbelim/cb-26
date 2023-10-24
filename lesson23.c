#include<stdio.h>
void main()
{
    float Area, pi, radius;
    pi = 3.1415962;

    printf("Enter Value of Radius : ");
    scanf("%f", &radius);

    printf("Value of Radius  : %.2f \n", radius);

    Area = pi * (radius * radius);

    printf("Area of Circle : %.2f \n", Area);
}
#include<stdio.h>
void main()
{
    float area, height, radius, pi;
    pi = 3.1415926;
    height = 10;
    radius = 10;

    printf("Value of Height : %.2f\n", height);
    printf("Value of Radius : %.2f\n", radius);

    area = (2 * pi * radius * height)+(2*pi*radius*radius);

    printf("Area of Cylinder : %.4f \n", area);
}
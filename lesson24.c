// write a program to find area of cylinder.
#include<stdio.h>
void main()
{
    float r, h, pi, area;

    pi = 3.1415962;
    printf("Enter Value of Radius  : ");
    scanf("%f", &r);
    printf("Enter Value of Hight :  ");
    scanf("%f", &h);

    printf("Value of Radius : %.2f \n",r);
    printf("Value of Height : %.2f \n",h);

    area = (2 * pi * r * h) + (2 * pi * (r * r));

    printf("Area of Cylinder : %.4f ", area);

    
}
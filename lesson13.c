// write a program to find area of triangle .
#include<stdio.h>
void main()
{

    float answer, height, base;
    height = 13;
    base = 11;

    printf("Value of Height : %.2f \n", height);
    printf("Value of Base   : %.2f \n", base);

    answer = (height * base)/2;
    printf("Area of Triangle is %.2f", answer);
}
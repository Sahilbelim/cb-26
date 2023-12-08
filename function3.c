#include<stdio.h>

float getpi()
{
  
    return 3.14159628;
}

void main()
{
    float pi, r, area;
    pi = getpi();
    
    printf("Enter Value of Radius ");
    scanf("%f", &r);

    area = pi * (r * r);

    printf("Area of Circle : %.2f \n", area);

}
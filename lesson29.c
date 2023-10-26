#include<stdio.h>
void main()
{
    float weight, height,bmi;

    printf("Enter VAlue of Weight : ");
    scanf("%f", &weight);
    printf("Enter Value of Height : ");
    scanf("%f", &height);

    bmi = weight / (height * height);

    printf("\n|||||||||||||BMI = %.2f||||||||||||||\n", bmi);
}
#include<stdio.h>
void main()
{
    int foot_height, inch_height;
    float weight,BMI,foot_meter,inch_meter,height;
    printf("Enter Weight : ");
    scanf("%f", &weight);
    printf("Enter Height in Foot : ");
    scanf("%d", &foot_height);
    printf("Enter Height in Inch : ");
    scanf("%d", &inch_height);

    // printf("Weight : %.2f \n", weight);
    // printf("Height : %d in Foot \n", foot_height);
    // printf("Height : %d in Inch \n", inch_height);

    foot_meter = foot_height / 3.281;

    inch_meter = inch_height / 39.37;

    height = foot_meter + inch_meter;

    BMI = weight / (height * height);

    printf("\n||||||||||||||| BMI : %.2f ||||||||||||||||||||\n",BMI);
}
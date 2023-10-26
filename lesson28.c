#include<stdio.h>
void main()
{
    int height_foot, height_inch;
    float foot_meter,inch_meter,height;
    printf("|||||  Height ||||\n");
    printf("Ente Foot : ");
    scanf("%d",&height_foot);
    printf("Enter Inch : ");
    scanf("%d", &height_inch);
    // printf("Value of foot : %d \n", height_foot);
    // printf("Value of inch : %d \n", height_inch);

    foot_meter = height_foot / 3.281;
    inch_meter = height_inch / 39.37;
    // printf("Foot to Meter : %.4f m \n",foot_meter);
    // printf("Inch to Meter : %.4f m \n",inch_meter);

    height = foot_meter + inch_meter;
    printf("\nFinale Height in meter : %.4f m \n", height);
}
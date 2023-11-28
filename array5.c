#include<stdio.h>
void main()
{
    int n,k;
    printf("Enter The Number of Triangle : \n ");
    scanf("%d", &n);
    float height[n],base[n],area[n];

    for (k = 0; k < n;k++)
    {
        printf("Enter The Value of Triangle - 1 \n");
        printf("Enter  Height : ");
        scanf("%f", &height[k]);
        printf("Enter Base ");
        scanf("%f", &base[k]);
    }

    // printf("Enter The Value of Triangle - 1 \n");
    // printf("Enter  Height : ");
    // scanf("%f",&height[0]);
    // printf("Enter Base");
    // scanf("%f", &base[0]);

    // printf("Enter The Value of Triangle - 2 \n");
    // printf("Enter  Height : ");
    // scanf("%f", &height[1]);
    // printf("Enter Base");
    // scanf("%f", &base[1]);
    // printf("Enter The Value of Triangle - 3 \n");
    // printf("Enter  Height : ");
    // scanf("%f", &height[2]);
    // printf("Enter Base");
    // scanf("%f", &base[2]);
}

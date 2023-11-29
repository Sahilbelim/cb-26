#include<stdio.h>
void main()
{
    int n,k;
    printf("Enter The Number of Triangle :  ");
    scanf("%d", &n);
    float height[n],base[n],area[n];

    for (k = 0; k < n;k++)
    {
        printf("Enter The Value of Triangle - %d \n",k+1);
        printf("Enter  Height : ");
        scanf("%f", &height[k]);
        printf("Enter Base ");
        scanf("%f", &base[k]);
    }

    for (k = 0; k < n;k++)
    {
        area[k] = (height[k] * base[k])/2;
        printf("\n\n||||||||||||||| Area Of Tringlr %d : %.2f |||||||||||||||",k+1,area[k]);
    }
    // area[0] = height[0] * base[0];
    // printf("Area Of Tringlr 1 : %f \n",area[0]);
    // area[1] = height[1] * base[1];
    // printf("Area Of Tringlr 2 : %f \n",area[1]);
    // area[2] = height[2] * base[2];
    // printf("Area Of Tringlr 2 : %f \n",area[2]);

}

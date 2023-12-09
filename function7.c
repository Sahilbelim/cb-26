#include<stdio.h>

float AreaR()
{
    float length, width;

    printf("Enter Lenth : ");
    scanf("%f", &length);
    printf("Enter width : ");
    scanf("%f", &width);

    return (length * width);
}

float AreaT()
{
    float height, base,area;
    
    printf("Enter height : ");
    scanf("%f", &height);
    printf("Enter base : ");
    scanf("%f", &base);
    area = (height * base) / 2;

    return area;
}

float Areacirle(float r)
{
    float ans,pi;
    pi = 3.14159628;

    ans = pi *( r * r);

    return ans;
}

float AreaCy()
{
    float height, radius, pi,area;
    printf("Enter height : ");
    scanf("%f", &height);
    printf("Enter radius : ");
    scanf("%f", &radius);

    pi = 3.14159628;

    area = (2 * pi * radius * height) + (2 * pi * (radius * radius));

    return area;
}
void main()
{
    int ch;
    float ans,radius;

    printf("\n|||||||||||||||||||||Enter option of given opration||||||||||||||||||||| \n");
    printf("  1 for area of rectangle  \n");
    printf("  2 for area of triangle   \n");
    printf("  3 for area of circle   \n");
    printf("  4 for area of cylinder   \n");
    printf("Enter Choice : ");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        ans = AreaR();
        printf("Area of Ractangle %.2f\n", ans);
        break;

    case 2:
        ans = AreaT();
        printf("Area of triangle %.2f\n", ans);
        break;
    case 3:
        printf("Enter Value of Radius ");
        scanf("%f", &radius);
        ans = Areacirle(radius);
        printf("Area of triangle %.2f\n", ans);
        break;

    case 4:
        ans = AreaCy();
        printf("Area of Cylonder %.2f\n", ans);
        break;

    default:
        printf("Invalide Input \n");
        break;
    }
}
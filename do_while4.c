#include <stdio.h>
void main()
{
    int option;
    float var1, var2,ans,pi;
    pi = 3.1415962;
    char choice='y';

    do
    {
        printf("\n ||||||||||||||||||||||||||||Enter Choose the  opption : |||||||||||||||||||||||||||||| \n");
        printf("1 for Area of Triangle .\n");
        printf("2 for Area of Circle .\n");
        printf("3 for Area of Squre .\n");
        printf("4 for Area of Rectangle .\n");
        printf("5 for Area of Cylinder  .\n");
        printf("Enter Option : ");
        scanf("%d", &option);

        if (option == 1)
        {
            printf("Enter Height of Triangle : ");
            scanf("%f", &var1);
            printf("Enter Base of Triangle .");
            scanf("%f", &var2);

            ans = (var1 * var2) / 2;
            // ans= height*base /2

            printf("Area of Triangle is %.2f \n ", ans);
        }
        else if (option == 2)
        {
            printf("Enter Radius of Circle : ");
            scanf("%f", &var1);

            ans = pi * (var1 * var1);
            // ans=pi* r*r

            printf("Area of Circle is %.2f \n ", ans);
        }
        else if (option == 3)
        {
            printf("Enter length of Squre : ");
            scanf("%f", &var1);

            ans = (var1 * var1);
            // ans=l*l

            printf("Area of Squre is %.2f \n ", ans);
        }
        else if (option == 4)
        {

            printf("Enter length of Rectangle : ");
            scanf("%f", &var1);
            printf("Enter Width of Rectangle : ");
            scanf("%f", &var2);

            ans = (var1 * var2);
            // ans=leght*width

            printf("Area of Rectangle is %.2f \n ", ans);
        }
        else if (option == 5)
        {

            printf("Enter height of Cylinder : ");
            scanf("%f", &var1);
            printf("Enter radius of Cylinder : ");
            scanf("%f", &var2);

            ans = (2 * pi * var1 * var2) + (2 * pi * var2 * var2);
            // ans=leght*width

            printf("Area of Cylinder is %.2f \n ", ans);
        }
        else
        {
            printf(" ! Invalide option ,  Choose valide option \n ");
        }

        printf("If Contion then Enter '0' ");
        scanf("%d", &option);

    } while (option == 0 );
}
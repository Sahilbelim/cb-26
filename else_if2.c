// write a program to check which  triangle  is  biger ? get  3 triangle from user
#include <stdio.h>
void main()
{
     int height1, base1, area1;
     int height2, base2, area2;
     int height3, base3, area3;

     printf("Enter value of height 1 ");
     scanf("%d", &height1);
     printf("Enter value of base 1 ");
     scanf("%d", &base1);
     printf("Enter value of height 2 ");
     scanf("%d", &height2);
     printf("Enter value of base 2 ");
     scanf("%d", &base2);
     printf("Enter value of height 3 ");
     scanf("%d", &height3);
     printf("Enter value of base 3 ");
     scanf("%d", &base3);

     printf("\nThe value of height 1 is %d ", height1);
     printf("\nThe value of base 1 is %d", base1);
     printf("\nThe value of height 2 is %d ", height2);
     printf("\nThe value of base 2 is %d", base2);
     printf("\nThe value of height 3 is %d ", height3);
     printf("\nThe value of base 3 is %d", base3);

     area1 = height1 * base1 / 2;
     area2 = height2 * base2 / 2;
     area3 = height3 * base3 / 2;

     printf("\n\nThe value of area 1 is %d ", area1);
     printf("\nThe value of area 2 is %d ", area2);
     printf("\nThe value of area 3 is %d ", area3);
     printf("\n\n");

     if (area1 == area2 && area2 == area3)
     {
          printf("All are same ");
     }
     else
     {
          if (area1 > area2)
          {
               if (area1 > area3)
               {
                    printf("Triangle 1 is greater");
               }
               else
               {
                    printf("Triangle 3 is greater ");
               }
          }
          else
          {
               if (area2 > area3)
               {
                    printf("Triangle 2 is greater ");
               }
               else
               {
                    printf("Triangle 3 is greater ");
               }
          }
     }
}
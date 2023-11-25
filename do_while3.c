#include<stdio.h>
void main()
{

    int option,number1,number2,ans;

    do{

        printf("\n|||||||||||||||||||||Enter option of given opration||||||||||||||||||||| \n");
        printf("  1 for addtion  \n");
        printf("  2 for subtraction  \n");
        printf("  3 for Multiplication  \n");
        printf("  4 for Division  \n");
        printf("Enter  number : ");
        scanf("%d", &option);

        // printf("%d", option);
        if (option >= 1 && option <= 4)
        {

            printf("Enter Value of number 1 : ");
            scanf("%d", &number1);

            printf("Enter Value of number 2 : ");
            scanf("%d", &number2);
        }

        switch (option)
        {
        case 1:

            ans = number1 + number2;
            break;
        case 2:

            ans = number1 - number2;
            break;
        case 3:

            ans = number1 * number2;
            break;
        case 4:

            ans = number1 / number2;
            break;
        default:
            printf("invalide input\n");
        }

        if (option >= 1 && option <= 4)
        {
            printf("\n>>>>>>>>>>>>>>>>>>>>>>>Answer  is %d <<<<<<<<<<<<<<<<<<<<<<<<<<\n", ans);
        }

        
    } while (option>=1 && option<=4);
}
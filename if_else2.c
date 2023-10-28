#include<stdio.h>
void main()
{
    int age;

    printf("Enter Value of Age : ");
    scanf("%d", &age);
    if(age>=18)// if 19>=18 true  than code run 15>=18 flase then if code not run
    {

        printf("\nYou are Aligiblle for Voting \n\n");
    }
    else
    {
        printf("\nYou are Not Aligible for Votinng \n\n");
    }

    printf("Good Bye ");
}
#include<stdio.h>
void main()
{
    int marks[5][5],i,j;

    for (i = 0; i < 5;i++)
    {
        printf("\nEnter The student %d marks \n",i+1);
        for (j = 0; j < 5; j++)
        {
            printf("Enter The Marks of Subject %d : ",j+1);
            scanf("%d", &marks[i][j]);
        }
    }

    // printf("\n|||||||||||||||||Student 1 ||||||||||||||||||\n");
    // printf("\tSubject 1 : 25 \n");
    // printf("\tSubject 2 : 25 \n");
    // printf("\tSubject 3 : 25 \n");
    // printf("\tSubject 4 : 25 \n");
    // printf("\tSubject 5 : 25 \n");
    // printf("\tTotal marks: 125 \n");
    

}
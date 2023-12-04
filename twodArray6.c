#include<stdio.h>
void main()
{
    int marks[5][5],i,j,total[5];
    float avg[5],max;

    for (i = 0; i < 5;i++)
    {
        printf("\nEnter The student %d marks \n",i+1);
        for (j = 0; j < 5; j++)
        {
            printf("Enter The Marks of Subject %d : ",j+1);
            scanf("%d", &marks[i][j]);
        }
    }

    for (i = 0; i < 5;i++)
    {
        total[i] = 0;
        printf("\n|||||||||||||||||Student %d ||||||||||||||||||\n\n",i+1);

        for (j = 0; j < 5; j++)
        {
            printf("\tSubject %d : %d \n", j + 1, marks[i][j]);

            total[i] = total[i] + marks[i][j];
        }
        printf("\tTotal marks: %d \n", total[i]);
        avg[i] = total[i] / 5;
        printf("\tTotal Avg  : %.2f \n", avg[i]);
  }


    // total[0] = 0;
    // printf("\n|||||||||||||||||Student 1 ||||||||||||||||||\n\n");

    // for (j = 0; j < 5;j++)
    // {
    //     printf("\tSubject %d : %d \n",j+1, marks[0][j]);

    //     total[0] = total[0] + marks[0][j];
    // }
    // printf("\tTotal marks: %d \n",total[0]);

    // total[1] = 0;
    // printf("\n|||||||||||||||||Student 2 ||||||||||||||||||\n\n");

    // for (j = 0; j < 5; j++)
    // {
    //     printf("\tSubject %d : %d \n",j+1, marks[1][j]);

    //     total[1] = total[1] + marks[1][j];
    // }
    // printf("\tTotal marks: %d \n", total[1]);

    // printf("\tSubject 1 : %d \n", marks[0][0]);

    // total[0] = total[0] + marks[0][0];

    // printf("\tSubject 2 : %d \n",marks[0][1]);

    // total[0] = total[0] + marks[0][1];

    // printf("\tSubject 3 : %d \n",marks[0][2]);

    // total[0] = total[0] + marks[0][2];

    // printf("\tSubject 4 : %d \n",marks[0][3]);

    // total[0] = total[0] + marks[0][3];

    // printf("\tSubject 5 : %d \n",marks[0][4]);

    // total[0] = total[0] + marks[0][4];

    // printf("\tTotal marks: %d \n",total[0]);
    

}
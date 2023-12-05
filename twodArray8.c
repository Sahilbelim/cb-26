#include<stdio.h>
void main()
{   
    int std,sub;

    printf("Enter Number of Student : ");
    scanf("%d", &std);
    printf("Enter Number of Subject : ");
    scanf("%d", &sub);

    int marks[std][sub],i,j,total[std],k;
    float avg[std],max;

    for (i = 0; i < std;i++)
    {
        printf("\nEnter The student %d marks \n",i+1);
        for (j = 0; j < sub; j++)
        {
            printf("Enter The Marks of Subject %d : ",j+1);
            scanf("%d", &marks[i][j]);
        }
    }

    for (i = 0; i < std;i++)
    {
        total[i] = 0;
        printf("\n|||||||||||||||||Student %d ||||||||||||||||||\n\n",i+1);

        for (j = 0; j < sub; j++)
        {
            printf("\tSubject %d : %d \n", j + 1, marks[i][j]);

            total[i] = total[i] + marks[i][j];
        }
        printf("\tTotal marks: %d \n", total[i]);
        avg[i] = total[i] / sub;
        printf("\tTotal Avg  : %.2f \n", avg[i]);
  }
  k = 10;
  max = 0;
  for (i = 0; i < std;i++)
  {
        if(max<=avg[i])
        {
            max = avg[i];
            k = i;
        }
  }

  printf("\n\n %d have Heigthest Avg of  %.2f \n",k+1, max);

}
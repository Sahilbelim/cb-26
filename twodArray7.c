#include<stdio.h>
void main()
{
    int marks[5][5],i,j,total[5],k;
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
  k = 0;
  max = 0;
  for (i = 0; i < 5;i++)
  {
        if(max<=avg[i])
        {
            max = avg[i];
            k = i;
        }
  }

  printf("\n\n %d have Heigthest Avg of  %.2f \n",k+1, max);

  //   if(max<=avg[0])
  //   {
  //       max = avg[0];
  //   }
  //   if (max <= avg[1])
  //   {
  //       max = avg[1];
  //   }
  //   if (max <= avg[2])
  //   {
  //       max = avg[2];
  //   }
  //   if (max <= avg[3])
  //   {
  //       max = avg[3];
  //   }
  //   if (max <= avg[4])
  //   {
  //       max = avg[4];
  //   }

  //   printf("Max = %.2f",max);
}
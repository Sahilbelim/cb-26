#include<stdio.h>
void main()
{
    int player[11],i,score;
    score = 0;
    for (i = 0; i < 11;i++)
    {
        printf("Enter The run Of Player %d : ",i+1);
        scanf("%d", &player[i]);
    }

    // printf("Enter The run Of Player 1 : ");
    // scanf("%d", &player[0]);
    // printf("Enter The run Of Player 2 : ");
    // scanf("%d", &player[1]);
    // printf("Enter The run Of Player 3 : ");
    // scanf("%d", &player[2]);
    // printf("Enter The run Of Player 4 : ");
    // scanf("%d", &player[3]);
    // .
    // .
    // .
    // .
    // printf("Enter The run Of Player 11 : ");
    // scanf("%d", &player[10]);
    for (i = 0; i < 11;i++)
    {
        score = score + player[i];
    }
    // score = score + player[0];
    // score = score + player[1];
    // score = score + player[2];
    // score = score + player[3];
    // score = score + player[4];
    // score = score + player[5];
    // score = score + player[6];
    // score = score + player[7];
    // score = score + player[8];
    // score = score + player[9];
    // score = score + player[10];

    printf("Total Score of Teame %d \n", score);
}
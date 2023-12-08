#include <stdio.h>

int sum(int a, int b)
{
     int ans = a + b;
     return ans;
}

int sub(int x, int y)
{
     int ans = x - y;

     return ans;
}

int mul(int n1, int n2)
{
     return (n1 * n2);
}

float div(float d1, float d2)
{
     return (d1 / d2);
}
void main()
{
     // int answer;
     // float Ans;

     // answer = sum(10, 20);

     // printf("%d ", answer);

     // answer = sub(10, 30);
     // printf("\n%d ", answer);

     // answer = mul(5, 3);

     // printf("\n%d", answer);

     // Ans = div(25, 3);
     // printf("\n%f", Ans);

     int ch, number1, number2,ans;
     float Ans;

     printf("\n|||||||||||||||||||||Enter option of given opration||||||||||||||||||||| \n");
     printf("  1 for addtion  \n");
     printf("  2 for subtraction  \n");
     printf("  3 for Multiplication  \n");
     printf("  4 for Division  \n");
     printf("Enter Choice : ");
     scanf("%d", &ch);

     if (ch >= 1 && ch <= 4)
     {

          printf("Enter Number 1 : ");
          scanf("%d", &number1);
          printf("Enter number 2 : ");
          scanf("%d", &number2);

          // printf("%d %d \n",number1,number2);
     }
    

     if (ch == 1)
     {
          ans = sum(number1, number2);
          printf("Answer : %d ", ans);
     }
     else if (ch == 2)
     {
          ans = sub(number1, number2);
          printf("Answer : %d ", ans);
     }
     else if (ch == 3)
     {
          ans = mul(number1, number2);
          printf("Answer : %d ", ans);
     }
     else if (ch == 4)
     {
          Ans = div(number1, number2);
          printf("Answer : %f ", Ans);
     }
     else
     {
      printf("Invalide input ? \n");
     }

}
#include <stdio.h>

// void printTable(int number)
// {
//     int i;
//     for (i = 1; i <= 10; i++)
//     {
//         printf("%d x %d  = %d \n", number, i, (number * i));
//     }
// }
int sum(int a,int b ,int c)
{
    int ans = a + b + c;

    return ans;
}
void main()
{

    int n1, n2, n3,temp;
    printf("Enter Value of Number 1 ");
    scanf("%d", &n1);
    printf("Enter Value of Number 2 ");
    scanf("%d", &n2);
    printf("Enter Value of Number 3 ");
    scanf("%d", &n3);

    temp = sum(n1, n2, n3);

    printf("Answer : %d\n",temp);
    
    // printTable(temp);
}
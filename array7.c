#include <stdio.h>
void main()
{
    int n;
    printf("Enter The number of Input ");
    scanf("%d", &n);

    int number[n], i,sum=0;
    for (i = 0; i < n; i++)
    {
        printf("Enter The Value of Number %d : ", i + 1);
        scanf("%d", &number[i]);
    }
    // printf("Enter The Value of Number 1 : ");
    // scanf("%d", &number[0]);
    // printf("Enter The Value of Number 2 : ");
    // scanf("%d", &number[1]);
    // printf("Enter The Value of Number 3 : ");
    // scanf("%d", &number[2]);
    // printf("Enter The Value of Number 4 : ");
    // scanf("%d", &number[3]);
    for (i = 0; i < n;i++)
    {
        
        printf("Number %d : %d \n",(i+1),number[i]);
        sum = sum + number[i];
}

printf("Total number of Sum is %d ", sum);
// printf("Number 1 : %d \n", number[0]);
// printf("Number 2 : %d \n", number[1]);
// printf("Number 3 : %d \n", number[2]);
// printf("Number 4 : %d \n", number[3]);

// k=j+1
// j++
// j=j+1


}
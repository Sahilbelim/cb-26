// 1]2, 1, 3, 4, 7, 11, 18, 29, 47, 76, 123 ... 300
#include<stdio.h>
void main()
{
    int number1,number2;
    number1 = 2;
    number2 =  1; //1

    printf("%d , ", number1);
    printf("%d , ", number2);
while(number1<123)
{
    number1 = number1 + number2; // 3
    printf("%d , ", number1);

    number2 = number1 + number2; // 4
    printf("%d , ", number2);
}

    /*number1 = number1 + number2; //3
    printf("%d , ", number1);

    number2 = number1 + number2;//4
    printf("%d , ", number2);
    number1 = number1 + number2;
    printf("%d , ", number1);

    number2 = number1 + number2;
    printf("%d , ", number2);

    number1 = number1 + number2;
    printf("%d , ", number1);
    number2 = number1 + number2;
    printf("%d , ", number2);
    */
}
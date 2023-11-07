// 2] 1, 5, 12, 22, 35, 51, 70, 92, 117, 145, 176 ... 3000
#include<stdio.h>
void main()
{
    int i, temp;
    i = 1;
    temp=1;

    while(i<=3000)
    {
        printf("%d , ", i);
        temp = temp + 3; // 4
        i = i + temp;
    }
    // printf("%d , ", i);
    // temp = temp + 3; //7
    // i = i + temp;
    // printf("%d , ", i);
    // temp = temp + 3; //10
    // i = i + temp;
    // printf("%d , ", i);
    // temp = temp + 3;
    // i = i + temp;
    // printf("%d , ", i);
    // temp = temp + 3;
    // i = i + temp;
    // printf("%d , ", i);
}
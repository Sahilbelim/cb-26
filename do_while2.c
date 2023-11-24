#include<stdio.h>
void main()
{
    int i,temp;
    i = 1;
    temp = 1;
    do
    {
        printf("%d ", i);
        temp = temp + 1;
        i=i+temp;
    } while (i<=100);
    
}
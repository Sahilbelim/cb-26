#include<stdio.h>
void main()
{
    float p,  t;
    float r , A;
    p = 1000;
    t = 5;
    r = 1.5;

    printf("Value of P : %f \n",p);
    printf("Value of R : %.2f \n",r);
    printf("Value of T : %f \n",t);

    A = p * (1 + (r * t));

    printf("simple interest : %.2f \n", A);
}
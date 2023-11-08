// 1 ,4 ,9 ,16 ,25 , 36 ... 10000 using square formula . using  while 
#include<stdio.h>
void main()
{
     int n,sq;
     n=1;
     sq=1;

     while(sq<10000)
     {
           sq=n*n;
           printf("%d , ",n*n);
           n++; // n=n+1;
     }

     // sq=n*n;
     // printf("%d , ",sq);
     // n++;

     // sq=n*n;
     // printf("%d , ",sq);

     // n++;

     // sq=n*n;
     // printf("%d , ",sq);

     // n++;
     // sq=n*n;
     // printf("%d , ",sq);
}
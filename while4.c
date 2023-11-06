// 0, 1, 3, 6, 10, 15, 21, 28, 36, 45, 55 ... 1000
#include <stdio.h>
void main()
{
    int number, temp;

    number = 0;
    temp = 0;
while(number<1000)
    {
        printf("%d , ", number);

        temp = temp + 1;

        number = number + temp;
    }

   /*
    printf("%d , ", number);

    temp = temp + 1;

    number = number + temp;

    printf("%d , ", number);

    temp = temp + 1;

    number = number + temp;

    printf("%d , ", number);

    temp = temp + 1;

    number = number + temp;

    printf("%d , ", number);

    temp = temp + 1;

    number = number + temp;

    printf("%d , ", number);

    temp = temp + 1;

    number = number + temp;

    printf("%d , ", number);

    temp = temp + 1;

    number = number + temp;

    printf("%d , ", number);
   */

}
// Write a programe to findout wether the given alphabet is vowel or not
#include <stdio.h>
void main()
{
     char letter;

     printf("Enter value of letter ");
     scanf("%c", &letter);

     switch (letter)
     {
     case 'a':
     case 'e':
     case 'i':
     case 'o':
     case 'u':
     case 'A':
     case 'E':
     case 'I':
     case 'O':
     case 'U':
          printf("it is vowel ");
          break;
     default:
          printf("it is consonent ");
          break;
     }
}
#include<stdio.h>

struct data
{
    int RollNo;
    char name[24],mobile[10];
    char email[56];
    float height;

}s,s1,s2;

void main()
{

    struct data s3,s4,s5;

    printf("|Enter Value of Studet 1 | \n");
    printf("Enter Roll No : ");
    scanf("%d", &s.RollNo);
    printf("Enter Name : ");
    scanf("%s", &s.name);
    printf("Enter Mobile : ");
    scanf("%s", &s.mobile);
    printf("Enter Email : ");
    scanf("%s", &s.email);
    printf("Enter Height : ");
    scanf("%f", &s.height);

    printf("<<<<<<<<<<<<<<<<<<<  Student 1 >>>>>>>>>>>>>>>>>>>\n");
    printf("%d ) Name : %s\n",s.RollNo,s.name);
    printf("Moblie : %s \n",s.mobile );
    printf("Email : %s \n",s.email );
    printf("Height : %.2f \n",s.height );
    
}
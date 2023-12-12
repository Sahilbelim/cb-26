#include<stdio.h>

struct data
{
    int RollNo;
    char name[24],mobile[10];
    char email[56];
    float height;

}s[10];

void main()
{

    // struct data s3,s4,s5;

    int i;

    for ( i = 0; i < 2;i++)
    {

        printf("|Enter Value of Studet 1 | \n");
        printf("Enter Roll No : ");
        scanf("%d", &s[i].RollNo);
        printf("Enter Name : ");
        scanf("%s", &s[i].name);
        printf("Enter Mobile : ");
        scanf("%s", &s[i].mobile);
        printf("Enter Email : ");
        scanf("%s", &s[i].email);
        printf("Enter Height : ");
        scanf("%f", &s[i].height);
}

for (i = 0; i < 2;i++)
{

    printf("<<<<<<<<<<<<<<<<<<<  Student 1 >>>>>>>>>>>>>>>>>>>\n");
    printf("%d ) Name : %s\n",s[i].RollNo,s[i].name);
    printf("Moblie : %s \n",s[i].mobile );
    printf("Email : %s \n",s[i].email );
    printf("Height : %.2f \n",s[i].height );
}

    // printf("|Enter Value of Studet 2 | \n");
    // printf("Enter Roll No : ");
    // scanf("%d", &s[1].RollNo);
    // printf("Enter Name : ");
    // scanf("%s", &s[1].name);
    // printf("Enter Mobile : ");
    // scanf("%s", &s[1].mobile);
    // printf("Enter Email : ");
    // scanf("%s", &s[1].email);
    // printf("Enter Height : ");
    // scanf("%f", &s[1].height);

    // printf("<<<<<<<<<<<<<<<<<<<  Student 2 >>>>>>>>>>>>>>>>>>>\n");
    // printf("%d ) Name : %s\n", s[1].RollNo, s[1].name);
    // printf("Moblie : %s \n", s[1].mobile);
    // printf("Email : %s \n", s[1].email);
    // printf("Height : %.2f \n", s[1].height);
}
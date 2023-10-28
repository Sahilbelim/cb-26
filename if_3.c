// write a program to check user yearly incode more then 5 lakh calclulet tax and final income with 5 % rate.get monthly income.
#include<stdio.h>
void main()
{
    int monthly_income,yearly_income;
    float final_income,tax;

    printf("Enter Value of Monthly income : ");
    scanf("%d", &monthly_income);

    printf("Monthly Income : %d\n", monthly_income);

    yearly_income = monthly_income * 12;
    final_income = yearly_income;

    if (yearly_income > 500000)
    {
        tax = (yearly_income * 5) / 100;
        final_income = yearly_income - tax;
    }
    printf("Final Income : %.0f\n", final_income);
}
#include <stdio.h>

int main()
{
    int monthly_salary;

    printf("Enter your monthly salary: ");
    scanf("%d", &monthly_salary);

    int rent = (0.05* monthly_salary);
    printf("Your rent is %d\n", rent);

    int monthly_upkeep = (0.1* monthly_salary);
    printf("Mother's monthly upkeep is %d\n", monthly_upkeep);

    int personal_expenses = 380000;
    int total_expenses = rent + monthly_upkeep + personal_expenses;
    int result = monthly_salary - total_expenses;
    printf("Your balance is %d\n",result);

    if (result >= 0)
    {
        printf("Your salary is sufficient\n");
    }
    else
    {
        printf("Sorry, your salary is insufficient\n");
    }

    return 0;
}
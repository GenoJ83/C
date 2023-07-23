#include <stdio.h>
int main ()
{
    int Pocket_money = 1500000,Phone = 200000,Stationary = 50000,Transport = 500000,Food = 500000;
    int Total = Phone+Stationary+Transport+Food;
    int Balance = Pocket_money-Total;
    printf("Total expenditure %d",Total);
    printf("\nRemaining Balance %d",Balance);
    int pdt = Phone*Stationary*Transport*Food;
    printf("\nThe product is %d",pdt);
    return 0;


}
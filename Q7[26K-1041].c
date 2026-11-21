#include <stdio.h>

float totalCash = 0.0;

void deposit(float amount) 
{
    totalCash += amount;
    printf("Deposited %.2f\n", amount);
}

void showTotal() 
{
    printf("Total cash in bank: %.2f\n", totalCash);
}

int main() 
{
	deposit(5000);
    deposit(2500);
    deposit(1000);
	showTotal();

    return 0;
}


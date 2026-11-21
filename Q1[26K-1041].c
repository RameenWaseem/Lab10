#include<stdio.h>

int totalCalories(int n)
{
	if (n<=0)
	{
		return 0;
	}
	
	return (n*5) + totalCalories(n-1);
}

int main()
{
	int steps;
	printf("Enter number of steps: ");
	scanf("%d", &steps);
	
	int total = totalCalories(steps);
	printf("Total calories burned: %d", total);
}

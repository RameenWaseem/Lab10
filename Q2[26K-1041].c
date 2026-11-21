#include<stdio.h>

void reverseDigits(long num)
{
	if (num == 0)
	{
		return;
	}
	printf("%ld", num % 10);
	reverseDigits(num/10);
}

int main()
{
	long num;
	printf("Enter a number: ");
	scanf("%ld", &num);
	
	printf("Reversed: ");
	
	if(num == 0)
	{
		printf("0");
	}
	else
	{
		reverseDigits(num);
	}
	return 0;
}

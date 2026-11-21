#include <stdio.h>

int getToken() 
{
    static int token = 0; 
    token++;              
    return token;
}

int main()
{
	int i;
    for (i = 1; i <= 5; i++) 
	{
        printf("Patient %d -> Token No: %d\n", i, getToken());
    }

    return 0;
}


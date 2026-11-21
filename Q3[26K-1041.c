#include <stdio.h>

struct Book {
    int id;
    char title[50];
    float price;
};

int main() 
{
    struct Book b[3];
    int maxIndex = 0;
    int i; 
    
    for (i = 0; i < 3; i++) 
	{
        printf("Enter ID, Title, Price of book %d: ", i + 1);
        scanf("%d %s %f", &b[i].id, b[i].title, &b[i].price);

		if (b[i].price > b[maxIndex].price) 
		{
            maxIndex = i;
        }
    }
    
    printf("\n--- Book List ---\n");
    for (i = 0; i < 3; i++)
	{
        printf("%d  %s  Rs.%.2f\n", b[i].id, b[i].title, b[i].price);
    }

    printf("\nMost expensive: %s (Rs.%.2f)\n", b[maxIndex].title, b[maxIndex].price);

    return 0;
}


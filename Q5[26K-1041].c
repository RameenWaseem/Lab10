#include<stdio.h>

struct Date{
	int day;
	int month;
	int year;
};

struct Patient{
	char name[50];
	int age;
	struct Date admission;
};

int main()
{
	struct Patient p[2];
	int i;
	
	for(i=0; i<2; i++)
	{
		printf("Enter Name, Age: \n");
		scanf("%s %d", p[i].name, &p[i].age);
		
		printf("Enter Date of Admission: \n");
		scanf("%d %d %d", &p[i].admission.day, &p[i].admission.month, &p[i].admission.year);
	}
	
	printf("\n---Patient Records---\n");
	for(i=0; i<2; i++)
	{
		printf("%s, Age: %d, Admitted: %.02d/%.02d/%d\n", p[i].name, p[i].age, p[i].admission.day, p[i].admission.month, p[i].admission.year);
	}
	return 0;
}

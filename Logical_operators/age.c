#include<stdio.h>

int main()
{

	int age;

	printf("enter an age:\n");

	scanf("%d", &age);

	printf("allowed: %d\n", (age >= 13) && (age <= 19));

	return 0;

}

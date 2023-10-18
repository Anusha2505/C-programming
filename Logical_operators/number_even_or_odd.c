#include<stdio.h>

int main()

{
	int a;

	printf("enter 'a' value:\n");

	scanf("%d", &a);

	printf("even: %d\n", (a % 2) == 0);

	return 0;
}

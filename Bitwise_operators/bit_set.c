#include<stdio.h>

int main()

{
	int a , n;

	printf("enter value of a:\n");

	scanf("%d", &a);

	printf("enter bit position of n:\n");

	scanf("%d", &n);

	printf("bit set: %d\n", a | (1 << n));

	return 0;

}

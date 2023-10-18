#include<stdio.h>

int main()

{
	int a , n;

	printf("enter value of a:\n");

	scanf("%d", &a);

	printf("enter the bit position:\n");

	scanf("%d", &n);

	printf("bit clear: %d\n", a & ~ (1 << n));

	return 0;

}

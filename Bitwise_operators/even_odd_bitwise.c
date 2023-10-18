#include<stdio.h>

int main()
{
	int a;

	printf("enter value of a:\n");

	scanf("%d", &a);

	printf("even = 0 , odd = 1 , so a is  %d\n",a & 1);

	return 0;

}

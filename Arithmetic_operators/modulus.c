#include<stdio.h>

int main()
{

	int num1;
	int num2;
	int temp;

	printf("results of temp\n");

	scanf("%d %d", &num1, &num2);

	temp = num1 % num2;

	/* temp = num1 + num2 for addition
	 * temp = num1 - num2 for subtraction
	 * temp = num1 * num2 for multiplication
	 * temp = num1 / num2 for division */

	printf("%d\n",temp);

	return 0;

}	

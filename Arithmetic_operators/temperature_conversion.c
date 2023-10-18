#include<stdio.h>

int main()
{

	int celsius;
	float fahrenheit;

	printf("enter value for celsius\n");

	scanf("%d", &celsius);

	fahrenheit = celsius * 9/5 + 32;

	printf("value of fahrenheit is %f\n",fahrenheit);

	return 0;

}


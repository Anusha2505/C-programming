#include<stdio.h>

int main()
{

	int kilometer;
	float miles;

	printf("enter kilometer\n");

	scanf("%d", &kilometer);

	miles = kilometer * 0.621371;

	printf("miles is %f\n",miles);

	return 0;

}

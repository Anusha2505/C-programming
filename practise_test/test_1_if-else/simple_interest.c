#include<stdio.h>

int main()
{
	int interest, principle, rate, time;
	
	printf("enter values of principle : rate : time :\n");

	scanf("%d %d %d", &principle, &rate, &time);

	interest = principle * rate * time / 100;

	printf("interest is %d\n",interest);

	return 0;
}

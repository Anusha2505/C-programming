#include<stdio.h>

int main()
{

	int meters;
        float speed, seconds;

	printf("enter meters and seconds\n");

	scanf("%d %f", &meters, &seconds);

	speed = meters / seconds;

	printf("speed meters/sec is %f\n", speed);

	return 0;

}

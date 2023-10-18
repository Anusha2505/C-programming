#include<stdio.h>

int main()

{
	int radius;
        float volume, pi = 3.14;

	printf("enter radius\n");

	scanf("%d", &radius);

	volume = 4/3 * pi * radius * radius * radius;

	printf("volume of sphere is %f\n",volume);

	return 0;

}

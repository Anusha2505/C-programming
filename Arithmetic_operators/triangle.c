#include<stdio.h>

int main()

{
	int base, height, area;
	

	printf("enter the value of base and height\n");

	scanf("%d %d", &base, &height);

	area = 0.5 * base * height;

	printf("area of triangle is %d\n",area);

	return 0;
}

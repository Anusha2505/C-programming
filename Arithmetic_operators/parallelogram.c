#include<stdio.h>

int main()
{

	int area, base, height;
	
	printf("enter value of base and height\n");

	scanf("%d %d", &base, &height);

	area = base * height;

	printf("area of parallelogram is %d\n",area);

	return 0;
}

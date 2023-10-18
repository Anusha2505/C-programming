#include<stdio.h>

int main()
{

	int length, width, area;

	printf("length and width of rectangle\n");

	scanf("%d %d", &length, &width);

	area = length * width;

	printf("area of rectangle %d\n",area);

	return 0;
}

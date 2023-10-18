#include<stdio.h>

int main()
{

	int area, perimeter, length, width;

	printf("enter values for lenth and width\n");

	scanf("%d %d", &length, &width);

	area = length * width;

	printf("area is %d\n",area);

	perimeter = 2 * (length + width);

	printf("perimeter is %d\n",perimeter);

	return 0;
}

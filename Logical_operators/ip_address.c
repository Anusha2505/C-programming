#include<stdio.h>

int main()

{
	int range;

	printf("enter range\n");

	scanf("%d", &range);

	printf("valid: %d\n", (range >= 0) && (range <= 255));

	return 0;

}

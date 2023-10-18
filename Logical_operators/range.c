#include<stdio.h>

int main()
{

	int range;

	printf("enter range:\n");

	scanf("%d", &range);

	printf("accepted: %d\n",(range >180) && (range <= 630));

	return 0;

}


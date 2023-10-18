#include<stdio.h>

int main()
{

	int a = 300 ,b,c;

	printf("enter b and c\n");

	scanf("%d %d", &b, &c);

	printf("valid: %d\n", a < (b + c));

	return 0;

}

#include<stdio.h>

int main()
{
	int p, n , t;
	float r, a;

	printf("enter values for p, n, t ,r\n");

	scanf("%d %d %d %f", &p, &n, &t, &r);

	a = p * (1 + r/n)*(n * t);

	printf("a value is %f\n",a);

	return 0;

}

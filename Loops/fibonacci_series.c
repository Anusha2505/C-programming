#include<stdio.h>

int main()

{
	int a, b=0, c=1, d, e;

	printf("enter the value of d\n");

	scanf("%d",&d);

	for(a=1; a<=d;a++){

		printf("%d\n",b);

		e=a+b;
		b=c;
		c=e;
	}
	return 0;
}

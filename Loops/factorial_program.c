#include<stdio.h>

int main()

{
	int a, b, factorial=1;

	printf("value of b\n");
	scanf("%d",&b);

	for(a=1; a<=b; a++){

		factorial=factorial*a;

		printf("%d\n",factorial);
	}
	return 0;

}

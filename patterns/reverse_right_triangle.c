#include<stdio.h>

int main()
{

	int i;
        int j; 
        int n;
	printf("enter n\n");

	scanf("%d",&n);

	for(i=n; i>=1; i--){

		for(j=1; j<=i; j++){
			printf(" *");
		}
		printf("\n");
	}
	return 0;
}

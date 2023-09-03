#include<stdio.h>
int main()
{

	int i, j, n;

	printf("enter n\n");
	scanf("%d", &n);

	for(i=1; i<=n; i++){
		for(j=1; j<= n-i; j++){  //here if we replace j<=i-n ...then this program will become right angle triangle
			printf("  ");}
		for(j=1; j<=i; j++){
			printf(" *");}
		printf("\n");
	}
	return 0;
}

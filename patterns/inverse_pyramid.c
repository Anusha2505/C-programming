#include<stdio.h>

int main()
{
	int i,j,n;
	printf("enter n:");
	scanf("%d", &n);
	for(i=1; i<n; i++){
		for(j=1; j<=(2*n-i-1);j++){
			if(j<=i){
				printf(" ");
			}
			else{
				printf("*");
			}
			printf("\n");
		}
		return 0;
	}
}


#include<stdio.h>

int main()
{

	int a=0, b;

	printf("enter value of b\n");
	scanf("%d",&b);

	/*while(a<=b){

	  printf("%d, ",a);

	  a++;
	  }*/        //it is using while loop

	for(a; a<=b; a++){
		printf("%d ,",a);
                }

        printf("\n");
	return 0;
}

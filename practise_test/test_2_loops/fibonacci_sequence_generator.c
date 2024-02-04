#include <stdio.h>

int main()
{
    int n,series=0,a=1,b;
    printf("enter any number:");
    scanf("%d",&n);
    printf("fibonacci series of %d is: ",n);
    
    for(int i=1;i<=n;i++){
        printf("%d ",series);
    
       b=series+a;
       series=a;
       a=b;
       
    }
	printf("\n");

    return 0;
}

#include <stdio.h>

int main()
{
    int n;
    printf("enter n :");
    scanf("%d",&n);
    
    for(int i =n; i>0;i--){
       
        printf("%d ",i);
        for(int j=1; j<=i-1;j++){
            printf("%d ",i-j);
        }
        printf("\n");
    }
	printf("\n");
    return 0;
}

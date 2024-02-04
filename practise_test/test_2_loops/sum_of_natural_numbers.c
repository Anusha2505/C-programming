#include <stdio.h>

int main()
{
    int n,sum=0;
    printf("enter n value:");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("sum of given natural numbers till %d is %d\n",n,sum);

    return 0;
}

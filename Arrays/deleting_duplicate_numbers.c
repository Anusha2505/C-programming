#include <stdio.h>

int main()
{
    int a[]={1,2,2,3,3,5,5,6,7,8};
    
    int n=10,i,j,k;
    
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                for(k=j;k<n-1;k++)
                {
                    a[k]=a[k+1];
                    
                    
                }
                 n--;
                    
                 j--;
               
            }
        }
        
    }
        for(i=0;i<n;i++)
        {
          printf("%d",a[i]);
        }
    printf("\n");
    return 0;
}

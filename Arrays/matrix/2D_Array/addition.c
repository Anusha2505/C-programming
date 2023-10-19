#include <stdio.h>

int main()
{
    
    int a1[1][3]={{1,2,3}};
    int a2[1][3]={{1,2,3}};
    int a3[1][3],i,j;
    
    
    
        for(j=0,i=0;j<3;j++)
        {
            a3[i][j]=a1[i][j] + a2[i][j];
            
            printf("%d  ",a3[i][j]);
        }
        
       
    
    printf("\n");
    

    return 0;
}

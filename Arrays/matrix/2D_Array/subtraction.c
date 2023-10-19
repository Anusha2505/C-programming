#include <stdio.h>

int main()
{
    
    int a1[2][3]={{9,12,15},{40,51,60}};
    int a2[2][3]={{7,8,9},{10,11,12}};
    int a3[2][3],i,j;
    
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            a3[i][j]=a1[i][j] - a2[i][j];
            
            printf("%d  ",a3[i][j]);
        }
        
        printf("\n");
    }
    printf("\n");
    

    return 0;
}

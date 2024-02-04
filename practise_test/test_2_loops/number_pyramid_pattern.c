#include <stdio.h>

int main()
{
    int rows,space;
    printf("enter number of rows:");
    scanf("%d",&rows);
    
    for(int i=1;i<=rows;i++){
        for(space=1;space<=rows-i;space++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf(" %d",i);
        }
        printf("\n");
    }
    return 0;
}

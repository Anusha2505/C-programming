#include <stdio.h>

int main()
{
    int i,j, arr[]={1,2,3,4,5,6,7,8,9,0};

    
    for(i=0,j=9; i<j;i++,j--)
    {
       int temp;
       
       temp=arr[i];
       arr[i]=arr[j];
       arr[j]=temp;
    }
    
    for(int i=0; i<10;i++){
    printf("%d,", arr[i]);
    
    }

printf("\n");

     return 0;
}


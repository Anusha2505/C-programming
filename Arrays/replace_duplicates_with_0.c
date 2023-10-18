#include <stdio.h>

int main()
{
    int arr[] = {1,1,2,2,3,3,4,4,5,5,6,6,7,7,8,8,9,9};
    
    int size = sizeof (arr)/sizeof (arr[0]);
    
    for(int i=0; i < size;i++)
    {
        for(int j =i+1; j < size; j++)
        {
          if(arr[i]==arr[j])
          {
            arr[j]=0;  
          }  
        }
        printf("%d",arr[i]);
    }

printf("\n");
    

    return 0;
}

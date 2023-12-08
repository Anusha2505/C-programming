#include <stdio.h>
int odd_index(int a[]); 

int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9};
    int total;
    
    total = odd_index(a); 
    printf("%d\n",total);
    return 0;
}

int odd_index(int a[]) 
{
    int val = 0;
 for(int i = 0;i<9 ; i++)
 {
     if(i %2 != 0)
     {
        val = val + a[i]; 
     }
 }

  return val;
}

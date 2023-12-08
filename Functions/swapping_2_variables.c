#include <stdio.h>

void add(int * ,int *);
 
int main()
{
    int a=10,b=20;
    
    int sum;
    
    add(&a,&b);
 
    printf("a = %d b= %d\n",a,b);
    
    return 0;
}

void add(int *p , int *q) 
{
   int temp;
   temp = *p;
   *p = *q;
   *q = temp;

}

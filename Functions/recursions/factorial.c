#include <stdio.h>

int factorial(int a,int fact);

int main()
{
    int a=5,fact=1,b;
    
    b = factorial(a,fact);
    
    printf("%d\n",b);

    return 0;
}

int factorial(int a,int fact){ // 5 = 5*4*3*2*1 =120
    
    fact= fact*a;
    a--;
     
    if(a<0){
        
    factorial(a,fact);
    
    }
    
    return fact;
}

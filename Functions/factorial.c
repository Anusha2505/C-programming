#include <stdio.h>

int factorial(int n);

int main()
{
    int n=5,fact;
    
    fact = factorial(n);
    
    printf("%d\n",fact);

    return 0;
}
int factorial(int n)
{
    int fact=1;
    for(int i=1;i<=5;i++)
    {
        fact = fact *i;
    }
    
   return fact;
}

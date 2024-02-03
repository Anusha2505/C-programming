#include<stdio.h>

int main(){
    int numb;
    printf("enter any choice of a number :");
    scanf("%d",&numb);
    
    if(numb %2 == 0){
        printf("given number %d is even number\n",numb);
    }
   else
    printf("given number %d is odd number\n",numb);
    
    return 0;
 }

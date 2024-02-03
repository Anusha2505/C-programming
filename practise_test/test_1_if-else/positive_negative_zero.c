#include<stdio.h>

int main(){
    
    int numb;
    printf("enter any choice of a number :");
    scanf("%d",&numb);
    
    if(numb > 0){
        printf("given number %d is positive number\n",numb);
    }
    else if(numb < 0){
        printf("given number %d is negative number\n",numb);
    }
    else{
    printf("given number %d is neither positive nor negative\n",numb);
    }
    return 0;
    
}

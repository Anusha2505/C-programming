#include<stdio.h>

int main(){
    
    int age;
    printf("enter any choice of any number :");
    scanf("%d",&age);
    
    if(age < 18){
        printf("given age %d is under 18\n",age);
    }
    else if(age > 18){
        printf("given age %d is over 18\n",age);
    }
    else{
    printf("given age is 18\n");
    }
    return 0;
    
}

#include<stdio.h>

int main(){
    
    int num1,num2;
    char operation;
    printf("enter values for num1 and numb2: \n");
    scanf("%d %d",&num1, &num2);
    
    printf("enter any choice of operator :");
    scanf(" %c",&operation);
    
    if(operation == '+'){
        printf("sum of given numbers is %d\n",num1+num2);
    }
    else if(operation == '-'){
        printf("subration of given numbers is %d\n",num1-num2);
    }
    else if(operation == '*'){
        printf("multiplication of given numbers is %d\n",num1*num2);
    }
    else if(operation == '/'){
        printf("division of given numbers is %d\n",num1/num2);
    }
    else
    printf("invalid operator\n");
    
    return 0;
    
}


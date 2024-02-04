#include <stdio.h>

int main()
{
      int num1,num2 ,min,GCD;
    printf("Enter num1 and num2 :");
    scanf("%d  %d",&num1,&num2);
    
    if(num1<num2){
        min = num1;
    }
    else{
        min = num2;
    }
    
    for(int i=1;i<=min;i++){
        if(num1%i==0 && num2%i==0){
            
            GCD = i;
        }
    }
    printf("GCD = %d\n",GCD);

    return 0;
}




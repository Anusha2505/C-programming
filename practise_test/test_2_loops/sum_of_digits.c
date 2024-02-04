#include <stdio.h>

int main()
{
    int input,sum=0,numb;
    printf("enter any number as an input:");
    scanf("%d",&input);
    
    while(input>0){
      numb=input%10;
      
      sum=sum+numb;
      
      input=input/10;
    }
    
    printf("sum of the given input is  %d\n",sum);

    return 0;
}

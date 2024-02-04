#include <stdio.h>

int main()
{
    int input,reminder,sum=0,numb;
    printf("enter any number as an input:");
    scanf("%d",&input);

    numb=input;

    while(input>0){
      reminder=input%10;
      sum=sum+(reminder*reminder*reminder);
      input=input/10;
    }
    input=numb;
    if(input==sum){
        printf("%d is a armstrong number\n",input);
    }
    else{
    printf("%d is not an armstrong number\n",input);
    }
    return 0;
}

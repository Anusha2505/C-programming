#include <stdio.h>

int main()
{
    int a;
    
    printf("enter any number\n");
    scanf("%d",&a);
    
    char *p;
    p = (char*)&a;
    
    for(int i =7; i>=0;i--){
        if(*p & (1<<i)){
            printf("1");
        }
        else{
            printf("0");
        }
    }
printf("\n");

    return 0;
}

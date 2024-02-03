#include<stdio.h>

int main(){
    
    int year;
    printf("enter any choice of a year :");
    scanf("%d",&year);
    
    if(year % 4 == 0){
        printf("given year %d is a leap year\n",year);
    }
    else
    printf("given year %d is not a leap year\n",year);
    
    return 0;
 }

#include <stdio.h>

int main()
{
    int num1,num2,menu_number;
    printf("select the options like add = 1  ");
    printf("subtract = 2  ");
    printf("exit = 3\n");
    scanf("%d",&menu_number);
    printf("Enter any 2 numbers");
    scanf("%d%d",&num1,&num2);
    switch(menu_number)
    {
        case 1 :
              printf("addtion of 2 numbers is %d\n",num1+num2);
              break;
        case 2 :
              printf("subtraction of 2 numbers is %d\n",num1-num2);
              break;
        case 3 :
              printf("exit\n");
              break;  
        default :
              printf("Enter number 1 ,2 and 3\n");
    }   
    

    return 0;
}

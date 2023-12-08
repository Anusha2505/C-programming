#include <stdio.h>

void print_numbers(int a);

int main()
{
    int a=1;
    
    printf("whole numbers 1-100:");

    print_numbers(a);
    
    printf("\n");

    return 0;
}

void print_numbers(int a){
    printf("%d ",a);
    
    a++;
    
    if(a<=100){
        print_numbers(a);
	}

    return;
}


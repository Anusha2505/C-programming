#include <stdio.h>
int even_index(int a[]); // function declaration

int main()
{
	int a[] = {1,2,3,4,5,6,7,8,9};
	int total;

	total = even_index(a); // function call
	printf("%d\n",total);
	return 0;
}

int even_index(int a[]) // function definition
{
	int val = 0;
	for(int i = 0;i<9 ; i++)
	{
		if(i %2 == 0)
		{
			val = val + a[i]; 
		}
	}
		return val;
}

#include<stdio.h>

int main()

{
	int g1, g2, g3;

	printf("enter scores of g1, g2, g3\n");

	scanf("%d %d %d", &g1, &g2, &g3);

	printf("valid:%d\n",((g1 >= 0) && (g1 <= 100)) && ((g2 >= 0) && (g2 <= 100)) && ((g3 >= 0) && (g3 <= 100)));

	return 0;

}

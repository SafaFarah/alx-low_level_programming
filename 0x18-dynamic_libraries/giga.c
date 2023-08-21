#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, num;
	for (i = 1; i <= 5; i++)
	{
		num = rand() % 75 + 1;
		printf(" %d ", num);
	}
	num = rand() % 15 + 1;
	printf("%d\n", num);
}  

#include <stdio.h>

int main()
{


	int val = 10;
	int *p;
	int **ptr;

	scanf("%d", &val);

	p = &val;
	ptr = &p;

	printf("from double pointer we get: %d\n", **ptr);


	return 0;
}
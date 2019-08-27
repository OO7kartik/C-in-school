#include <stdio.h>

void even_o_odd(int a)
{
	if(a % 2)
		printf("this is odd\n");
	else
		printf("this is even\n");
}
int main(int argc, char const *argv[])
{
	int n;

	printf("enter the number\n");
	scanf("%d", &n);

	even_o_odd(n);
	return 0;
}
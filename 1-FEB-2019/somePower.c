#include <stdio.h>


int main(int argc, char const *argv[])
{
	int num, pow, i=0;
	int value=1;

	scanf("%d %d" ,&num ,&pow);

	for(i; i< pow;i++)
	{
		value*=num;
	}

	printf("%d\n", value);

	return 0;
}
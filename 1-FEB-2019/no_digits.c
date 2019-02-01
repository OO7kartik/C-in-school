#include <stdio.h>

int main(int argc, char const *argv[])
{
	int num,count=0;

	scanf("%d" ,&num);

	while(num)
	{
		count++;
		num/=10;
	}
	printf("%d\n", count);

	return 0;
}
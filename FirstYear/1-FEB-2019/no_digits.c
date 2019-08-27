#include <stdio.h>

int main(int argc, char const *argv[])
{
	long long int num;
	int count=0;

	scanf("%lld" ,&num);

	while(num)
	{
		count++;
		num/=10;
	}
	printf("%d\n", count);

	return 0;
}
#include <stdio.h>


int main(int argc, char const *argv[])
{
	long long unsigned int n;
	int val;
	printf("enter the number\n");
	scanf("%llu" , &n);

	int arr[10] = {0};

	while(n)
	{
		val = n%10;
		arr[val]++;
		n/=10;
	}
	int p = 10;
	while(p--)
	{
		printf("number of %d: %d\n", p,arr[p]);
	}

	return 0;
}

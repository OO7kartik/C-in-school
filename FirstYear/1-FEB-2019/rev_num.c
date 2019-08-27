#include<stdio.h>

int main(int argc, char const *argv[])
{
	int n;

	printf("enter the number\n");
	scanf("%d" ,&n);

	int rev=0;

	while(n)
	{
		rev = rev*10 + n%10;
		n = n/10;
	}

	printf("%d" , rev);

	return 0;
}
#include <stdio.h>

int fact(int n)
{
	if(n <= 1)
		return n;
	return n*fact(n-1);

}


int main(int argc, char const *argv[])
{
	int n;

	printf("enter the number whose factorial you wish to find\n");
	scanf("%d", &n);

	printf("%d\n", fact(n));
	return 0;
}
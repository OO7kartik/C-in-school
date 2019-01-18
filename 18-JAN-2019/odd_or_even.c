#include<stdio.h>


int main(int argc, char const *argv[])
{
	int one;
	printf("enter the integer\n");
	scanf("%d ",&one);

	one%2==0 ? printf("even \n") : printf("not even\n");

	return 0;
}
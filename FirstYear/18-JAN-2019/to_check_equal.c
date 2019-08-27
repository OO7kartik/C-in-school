#include<stdio.h>


int main(int argc, char const *argv[])
{
	int one,two;
	printf("enter the two integers\n");
	scanf("%d %d",&one,&two);

	one == two ? printf("They are equal \n") : printf("They are not equal \n");

	return 0;
}
#include<stdio.h>


int main()
{
	double one,two;
	printf("enter the two integers\n");
	scanf("%lf %lf",&one,&two);

	one == two ? printf("They are equal \n") : printf("They are not equal \n");

	return 0;
}
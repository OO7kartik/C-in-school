#include<stdio.h>

int main(int argc, char const *argv[])
{
	int one,two;
	printf("enter the integer\n");
	scanf("%d",&one);

	( one%5==0 && one%11==0 ) ? printf("divisible \n") : printf("not divisible \n");

	return 0;
}
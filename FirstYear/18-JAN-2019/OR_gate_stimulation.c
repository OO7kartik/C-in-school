#include<stdio.h>


int main()
{
	int one,two;
	printf("enter the two digits\n");
	scanf("%d %d", &one,&two);
	printf(" %d OR %d = %d \n", one, two, one || two);

	return 0;
}
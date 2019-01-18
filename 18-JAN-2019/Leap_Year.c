#include<stdio.h>


int main(int argc, char const *argv[])
{
	int y;
	printf("enter the year\n");
	scanf("%d",&y);

	if(y%400==0)
		printf("LEap year");
	else if(y%4==0)
		printf("LEap year");
	else
		printf("not leap year");

	return 0;
}
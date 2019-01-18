#include<stdio.h>
#include <ctype.h>


int main(int argc, char const *argv[])
{
	char one;
	printf("enter the character\n");
	scanf("%s",&one);

	isalpha( one ) ? printf("it is alphabet \n") : printf("not alphabet \n");

	return 0;
}
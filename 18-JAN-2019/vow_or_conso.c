#include<stdio.h>


int main(int argc, char const *argv[])
{
	char one;
	printf("enter the character\n");
	scanf("%s",&one);

	(one=='a' || one=='e' ||one=='i' ||one=='o' ||one=='u' ||one=='A' ||one=='E' ||one=='I' ||one=='O' ||one=='U') ? printf("is vowel \n") : printf("is not vowel \n");

	return 0;
}
#include <stdio.h>
#include <string.h>

int main()
{
	int i = 0;

	printf("to print character string using pointers\n");
	printf("enter your string\n");

	char s[100],ch;

	scanf("%[^\n]%*c", s);
	printf("%s\n", s);
	printf("enter the number and a string keep it less than 15\n");

	char * ptr;
	ptr = s;

	do
	{
		printf("%c\n", *ptr);
	} while (*(ptr++)!='\0');


	

	printf("%s\n", ptr);

	return 0;
}
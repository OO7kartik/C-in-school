
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

	char * ptr;
	ptr = s;

	int count = 0;

	do
	{
		if(*ptr == 'a' || *ptr == 'A' || *ptr == 'e' || *ptr == 'E' || *ptr == 'i' || *ptr == 'I' || *ptr =='o' || *ptr=='O' || *ptr == 'u' || *ptr == 'U' )
			count++;
	} while (*(ptr++)!='\0');


	

	printf("%d\n", count);

	return 0;
}
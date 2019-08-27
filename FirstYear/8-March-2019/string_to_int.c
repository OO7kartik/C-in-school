#include <stdio.h>
#include <string.h>


int main()
{
	
	char arr[100];
	printf("enter the string\n");
	scanf("%s", arr);

	char *ptr;

	ptr = arr;
	int count = 0,digit[100],num = 0;


	while(*(ptr) != '\0')
	{
		if(*ptr >= 48 && *ptr <= 57)
		{
			num = num*10 + ( (*ptr) - 48 );
			ptr++;
		}else
		{
			printf("bad input\n");
			break;
		}
	}

	printf("%d\n", num);
return 0;
}
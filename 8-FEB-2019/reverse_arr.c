#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char arr[100];

	printf("enter the string\n");
	scanf("%s",arr);

  int num = strlen(arr);

	printf("first character: %c\n", arr[0]);
	printf("last character: %c\n", arr[num-1]);

	return 0;
}

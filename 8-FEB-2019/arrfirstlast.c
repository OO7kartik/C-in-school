#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char arr[100];

	printf("enter the string\n");
	scanf("%s",arr);

	int num = strlen(arr);

	char temp = arr[0];
	arr[0] = arr[num-1];
	arr[num-1] = temp;

  for (int i = 0; i < num; i++) {
  	printf("%c", arr[i]);
  }
	printf("\n");

	return 0;
}

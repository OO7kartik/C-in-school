#include <stdio.h>
#include <string.h>

int main()
{
	printf("to reverse the numbers in an array\n");
	printf("enter the numbers\n");

	int i = 0,arr[5];

	for (i = 0; i < 5; ++i)
	{
		scanf("%d", &arr[i]);	
	}

	int *ptr;
	ptr = &arr[0];

	for (i = 0; i < 5; ++i)
	{
		printf("%d", *( ptr++ ) );	
	}

	printf("printing the reverse now.....\n");
	ptr = &arr[0];

	for (i = 4; i >= 0 ; i--)
	{
		printf("%d", *( ptr+i ));
	}

	return 0;
}
#include <stdio.h>

int main()
{
	int a = 10;
	int *p = &a;

	printf("the value is (direct access) :%d\n", a);
	printf("the adress of this value  is  :%p\n", &a);
	printf("the value of a using pointer (indirect method) :%d\n", *p);
	printf("the adress of the pointer pointing to this value  is :%p\n", &p);
	printf("the value content of content of our pointer :%p  \n", &p);


	//now chaing the value

	printf("\n\n\n\nwe are changing the value\n\n\n\n\n");

	*p = 20;
	printf("now the value of a is: %d\n", *p);


	printf("enter the elements\n");
	int n = 5;
	int arr[5] = {0};
	int i = 0;

	for (i = 0; i < 5; ++i)
	{
		scanf("%d", &arr[i]);	
	}

	printf("now we are printing the\n");
	printf("\t|index|\t|value|\t|adress| \n");

	for (i = 0; i < 5; ++i)
	{
		printf("\t|%d|\t|%d|\t|%p| \n", i,*(ptr),ptr);
	}


	return 0;
}
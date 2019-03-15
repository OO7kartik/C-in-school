#include <stdio.h>

int main()
{
	int a = 10;
	int *p = &a;

	printf("the value is (direct access) :%d\n", a);
	printf("the adress of this value  is  :%u\n", &a);
	printf("the value of a using pointer (indirect method) :%d\n", *p);
	printf("the adress of the pointer pointing to this value  is :%u\n", &p);
	printf("the value content of content of our pointer :%u\n", &p);

	return 0;
}
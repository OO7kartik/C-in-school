#include <stdio.h>

void arr_oper(int arr[], int brr[],int crr[], int a)
{	
	int i;
	for (i = 0; i < a; ++i)
	{
		crr[i] = arr[i] + brr[i];
	}
}

int main(int argc, char const *argv[])
{

	int a;
	int i;

	printf("enter the number of elements in the array\n");
	scanf("%d", &a);

	printf("enter the elements in array 1\n");
	int arr[a], brr[a], crr[a];

	for ( i = 0; i < a; ++i)
		scanf("%d" ,&arr[i]);
	printf("enter the elements in array 2\n");
	for ( i = 0; i < a; ++i)
		scanf("%d" ,&brr[i]);
	
	printf("created an array having elements sun of first and second array\n\n\n");
	printf("displaying the elements \n\n");

	arr_oper(arr, brr, crr, a);

	for ( i = 0; i < a; ++i)
	{
		printf("%d\n", crr[i]);
	}

	return 0;
}
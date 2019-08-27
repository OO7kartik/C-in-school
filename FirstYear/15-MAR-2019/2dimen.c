#include <stdio.h>

#define SIZE 10

void arr_oper(int arr[][SIZE], int brr[][SIZE], int crr[][SIZE], int a, int c)
{	
	int i,j;
	for (i = 0; i < a; ++i)
	{
		for ( j = 0; j < c; ++j)
		crr[i][j] = arr[i][j] + brr[i][j];
	}
}

int main(int argc, char const *argv[])
{

	int r,c;
	int i,j;

	printf("enter the rows and columns of hte matrix\n");
	scanf("%d %d", &r, &c);

	printf("enter the elements in array 1\n");
	int arr[r][SIZE], brr[r][SIZE], crr[r][SIZE];

	for ( i = 0; i < r; ++i)
	{
		for ( j = 0; j < c; ++j)
			scanf("%d" ,&arr[i][j]);
	}
	printf("enter the elements in array 2\n");
	for ( i = 0; i < r; ++i)
	{
		for ( j = 0; j < c; ++j)
			scanf("%d" ,&brr[i][j]);
	}
	
	printf("created an array having elements sun of first and second array\n\n\n");
	printf("displaying the elements \n\n");

	arr_oper(arr, brr, crr, r, c);

	for ( i = 0; i < r; ++i)
	{
		for ( j = 0; j < c; ++j)
			printf("%d\n", crr[i][j]);
	}

	return 0;
}
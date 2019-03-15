#include <stdio.h>



int main(int argc, char const *argv[])
{
	
	int n1, n2, flag = 0;
	int *ptr;
	printf("enter the numbers in each array\n");
	scanf("%d %d", &n1, &n2);

	int arr[n1],brr[n2];

	printf("enter of array 1, %d elements\n", n1);
	for (int i = 0; i < n1; ++i)
		scanf("%d", &arr[i]);

	printf("enter of array 2, %d elements\n", n2);
	for (int i = 0; i < n2; ++i)
	{
		scanf("%d", &brr[i]);
		ptr = arr;
		for (int j = 0; j < n1; ++j)
		{
			if(brr[i] == *(ptr++))
			{	
				printf("%d is the common element\n", brr[i]);
				flag = 1;
			}
		}
	}

	if(flag)
	{
		printf("it has a similar element\n");
	} else
	{
		printf("they dont have a common element\n");
	}




	return 0;
}
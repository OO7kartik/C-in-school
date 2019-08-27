#include <stdio.h>

void arr_oper(int arr[], int a)
{
	int sum = 0, min = 12345, max = -12345; 

	int i;

	for (i = 0; i < a; ++i)
	{
		sum+=arr[i];
		if(min > arr[i])
			min = arr[i];
		if(max < arr[i])
			max = arr[i];                   
	}

	printf("the sun of the array is %d\n", sum);
	printf("the minimum of hte array is %d\n", min);
	printf("the maximum of hte array is %d\n", max);
	printf("the avg of the arrays is %f\n", ((float)(sum))/(a) );
}

int main(int argc, char const *argv[])
{

		int a;
		int i;

		printf("enter the number of elements in the array\n");
		scanf("%d", &a);

		printf("enter the elements\n");
		int arr[a];

		for ( i = 0; i < a; ++i)
		{
			scanf("%d" ,&arr[i]);
		}

		arr_oper(arr,a);

	return 0;
}
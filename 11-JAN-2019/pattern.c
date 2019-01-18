#include<stdio.h>

int main()
{
	int n;
	scanf("%d" ,&n);
	int val = -1;
	int spaces = n;


	for (int i = 0; i < 2*n-1; ++i)
	{
		
		for (int j = 0; j < n-spaces; ++j)
		{
			printf(" ");
		}
		

		for (int k = 0; k < spaces; ++k)
		{
			printf("* ");
		}
		printf("\n");

		if(spaces == 1)
		{
			val= -val;
		}

		spaces += val;

	}


	return 0;
}
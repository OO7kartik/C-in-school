#include <stdio.h>

int main(int argc, char const *argv[])
{	
	int n1,n2;
	printf("enter the two numbers \n");
	scanf("%d %d",&n1,&n2);
	
	for (int i = n1; i <=n2; ++i)
	{
		if(i%5)
			printf("%d\n", i);
	}

	return 0;
}
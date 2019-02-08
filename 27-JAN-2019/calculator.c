#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n,a,b,cal=1;

	while(1)
	{
		printf("enter the two numbers\n");
		scanf("%d %d" ,&a ,&b);

		printf("enter the operation\n1.add\n2.subtract\n3.multiply\n4.divide\n");
		scanf("%d" ,&cal);

		if(cal == 0)
			{
				break;
			}

		switch(cal)
		{
			case 1:
				printf("%d\n", a + b);
			 	break;
			case 2:
				printf("%d\n", a - b);
			 	break;
			case 3:
				printf("%d\n", a * b);
			 	break;
			case 4:
				printf("%d\n", a / b);
			 	break;
		}


	}

	return 0;
}
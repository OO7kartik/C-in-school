#include<stdio.h>


int main()
{
	int a,b,c;
	printf("enter the three integers\n");
	scanf("%d %d %d",&a,&b,&c);

	if(a>b && a>c)
		printf("%d is the greatest\n", a );
	else if(b>a && b>c)
		printf("%d is the greatest\n", b );
	else if(c>b && c>a)
		printf("%d is the greatest\n", c );

	return 0;
}
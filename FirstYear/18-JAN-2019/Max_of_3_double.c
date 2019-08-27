#include<stdio.h>

int main()
{
	double a,b,c;
	printf("enter the three integers\n");
	scanf("%lf %lf %lf",&a,&b,&c);

	if(a>b && a>c)
		printf("%lf is the greatest\n", a );
	else if(b>a && b>c)
		printf("%lf is the greatest\n", b );
	else if(c>b && c>a)
		printf("%lf is the greatest\n", c );

	return 0;
}
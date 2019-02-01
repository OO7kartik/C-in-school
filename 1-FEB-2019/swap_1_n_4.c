#include<stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	int n,rev,count=0,val=0;

	printf("enter the number\n");
	scanf("%d" ,&n);

	int original = n;

	while(n)
	{
		rev = rev*10 + n%10;
		n = n/10;
		count++;
	}
	int start = rev%10; 
	int end = original%10; 
	int extra = end*pow(10, count - 1);

	rev = rev/10;

	while(rev/10)
	{
		val = val*10 + rev%10;
		rev = rev/10;
	}

	printf("%d \n \n \n" , val*10+extra+start );

	return 0;
}
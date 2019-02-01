#include<stdio.h>

int main(int argc, char const *argv[])
{
	int n;

	printf("enter the number\n");
	scanf("%d" ,&n);

	int rev=0;

	int original = n;

	while(n)
	{
		rev = rev*10 + n%10;
		n = n/10;
	}
	if(original == rev){
		printf("this number is pallindrome\n");
	}else{
		printf("Not pallindrome\n");
	}


	return 0;
}
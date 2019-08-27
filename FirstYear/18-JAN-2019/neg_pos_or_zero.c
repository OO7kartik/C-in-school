#include<stdio.h>

int main(int argc, char const *argv[])
{
	int y;
	
	scanf("%d", &y);

	if(y==0)
		printf("zero");
	else if(y<0)
		printf("negative\n");
	else if(y>0)
		printf("postitive\n");
	

	return 0;
}
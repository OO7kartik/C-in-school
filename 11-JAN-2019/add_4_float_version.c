#include<stdio.h>

int main(){

	float  n;
	float sum=0;
	
	for(int i = 0; i<4; i++)
	{
		scanf("%f",&n);
		sum+= n;
	}

	printf("%f",sum);

return 0;
}

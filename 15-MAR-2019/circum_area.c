#include <stdio.h>

float circum(float a){ return 6.28*a; }
float area(float a){ return 3.14*a*a; }

int main(int argc, char const *argv[])
{

		float a;

		printf("enter the radius\n");
		scanf("%f", &a);

		printf("the circumference is %f \n", circum(a));
		printf("the area is %f \n", area(a));

	return 0;
}
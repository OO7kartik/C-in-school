#include<stdio.h>

int main(){

float sum,a,d;
int n;

printf("enter the first term and common difference");
scanf("%f", &a);
scanf("%f", &d);

printf("enter the value of n");
scanf("%d",&n);

printf("here");
printf("%f \n", (n*(2*a + (n-1)*d ))/2);
 
return 0;
}

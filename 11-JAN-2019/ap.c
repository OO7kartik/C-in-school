#include<stdio.h>

int main(){

float sum,a,d;
int n;

printf("enter the first term and common difference");
scanf("%f %f", &a, &d);

printf("enter the value of n");
scanf("%d",&n);

printf("here");
printf("%f", a + (n-1)*d);

return 0;
}

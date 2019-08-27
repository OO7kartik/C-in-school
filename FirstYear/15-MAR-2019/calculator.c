#include <stdio.h>

int add(int a, int b){ return a + b; }
int sub(int a, int b){ return a + b; }
int mul(int a, int b){ return a + b; }
int div(int a, int b){ return a + b; }

int main(int argc, char const *argv[])
{
	int c = 1,x;

	do
	{
		int a,b;

		printf("enter the two numers\n");
		scanf("%d %d", &a, &b);

		printf("enter:- \n ADD : 1\n SUB : 2\n MUL : 3\n DIV : 4\n EXIT : press anything else\n");
		scanf("%d", &x);

		switch (x) 
	   { 
	       case 1: printf("The sum is %d \n", add(a,b)); 
	               break; 
	       case 2: printf("The subtraction is %d \n", sub(a,b)); 
	                break; 
	       case 3: printf("The multiplicaiton is %d \n", mul(a,b));  
	               break; 
	       case 4: 
	       		   if( b != 0)
	       		  	 printf("The division is %d \n", div(a,b)); 
	       		  else
	       		  	 printf("infinity\n"); 
	               break; 
	       default: c = 0;
	       			printf("\n \n \nbye bye\n");
	                break; 

	    }  

	 }while(c != 0);

	return 0;
}
#include <stdio.h>

int fact(int n)
{
  int fac = 1;
  while(n)
  {
    fac = fac*n;
    n--;
  }
  return fac;
}

int main()
{
  int n;
  printf("enter the number of rows\n");
  scanf("%d", &n);
  printf("\n");

  int i = 0,k,j;
  for ( i = 0; i < n; i++)
  {
      for ( j = i; j < n; j++)
      {
        printf(" ");
      }
      for ( k = 0; k <= i; k++)
      {
        printf("%d ", fact(i)/(fact(k)*fact(i-k)));
      }
    printf("\n");
  }

	return 0;
}

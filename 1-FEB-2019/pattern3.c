#include <stdio.h>


int main()
{
  int n,i,j;
  printf("enter the number of rows\n");
  scanf("%d", &n);
  printf("\n");

  for ( i = 0; i < n; i++) {
    for ( j = 0; j < n; j++) {
      if(i == 0 || j==0 || j == (n-1) || i == n-1)
      {
        printf("* ");
      }else{
      printf(" ");
    }
  }
  printf("\n");
}

	return 0;
}

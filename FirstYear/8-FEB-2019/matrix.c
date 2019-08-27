#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;
  printf("enter the dimensions of the matrix\n");
  scanf("%d", &n);

  int arr1[n][n], arr2[n][n], sum[n][n];

  printf("enter the elements of the first matrix\n");

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d",&arr1[i][j]);
    }
  }

  printf("enter the elements of the first matrix\n");

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d",&arr2[i][j]);
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d  ", arr1[i][j] + arr2[i][j]);
    }
    printf("\n");
  }

	return 0;
}

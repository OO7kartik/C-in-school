#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	int n;
	printf("enter the number characters in the array\n");
	scanf("%d",&n);

	char arr[n+1];
  int count[123] = {0};

  printf("enter the string\n");
	scanf("%s",arr);

  for (int i = 0; i < n; i++) {
    count[(int)arr[i]]++;
  }

	for (int i = 'A'; i < 'Z'; i++)
  {
    if(count[i]!=0)
      printf("%c:%d\n",i,count[(int)i] );
  }
  for (int i = 'a'; i < 'z'; i++)
  {
    if(count[i]!=0)
      printf("%c:%d\n",i,count[(int)i] );
  }

	return 0;
}

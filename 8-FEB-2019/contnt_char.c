#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
  int val=0,i=0;
	char arr[100],ch;

  printf("enter the string\n");
	scanf("%s",arr);

  printf("enter the character you want\n");
  scanf("%c", &ch);
  scanf("%c", &ch);

  while(arr[i]!='\0')
  {
    if(ch == arr[i])
      val++;
    i++;
  }

  printf("your character appears %d times\n", val);

	return 0;
}

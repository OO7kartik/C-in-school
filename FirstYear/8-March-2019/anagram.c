#include <stdio.h>
#include <string.h>


int main(int argc, char const *argv[])
{
	
	int arr[26] = {0};
	int brr[26] = {0};

	char str1[100];
	char str2[100];

	printf("enter the first string\n");
	scanf("%s" ,str1);
	printf("enter the second string\n");
	scanf("%s" ,str2);

	int i=0, j=0,flag = 0;

	while(str1[i] != '\0')
		arr[str1[i++] - 97]++;

	while(str2[j] != '\0')
		brr[str2[j++] - 97]++;

	for (int i = 0; i < 26; ++i)
	{
		if(arr[i] != brr[i])
		{
			printf("they are not anagrams\n");
			flag = 1;
			break;
		}
	}

	if(flag == 0)
		printf("they are anagrams\n");


	return 0;
}
#include <stdio.h>
#include <string.h>

int main ()
{
	char string[100];
  printf("\n\t Enter the string --> ");
	if(scanf("%c",string))
	{
			char temp;
	int i, j;
	int n = strlen(string);
	for (i = 0; i < n-1; i++) {
		for (j = i+1; j < n; j++) {
			if (string[i] > string[j]) {
					temp = string[i];
					string[i] = string[j];
					string[j] = temp;
			}
		}
	}

	printf("\n\tThe sorted string is : %s", string);
	}
	else
	{
		printf("\n\tInvalid input...!");
	}
	return 0;
}

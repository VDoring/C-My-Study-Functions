#include <stdio.h>
#include <string.h>

void main()
{
	int k;
	char str[30];

	scanf("%s", str);
	k = strlen(str);

	for (int i = k - 1; i >= 0; i--)
	{
		printf("%c", str[i]);
	}
}
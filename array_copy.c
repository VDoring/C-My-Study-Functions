#include <stdio.h>



char *mystrcpy(char *dest, const char *src);

int main(void)

{

	char source[100] = "Hello World";

	char copy[100];



	printf("���� ���ڿ�:%s\n", source);

	mystrcpy(copy, source);

	printf("���� ��� ���ڿ�: %s\n", copy);

	return 0;

}

char *mystrcpy(char *dest, const char *source)
{
	char *origin;
	origin = dest;
	for (origin = dest; *dest = *source; dest++, source++);//������ ���ڰ� ���̸� �ݺ�
	return origin;
}
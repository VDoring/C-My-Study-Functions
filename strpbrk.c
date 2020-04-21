// https://modoocode.com/95
/*
strpbrk �� ��ġ�ϴ� ���ڸ� ã�Ҵٸ� �������� ���� 1 �������Ѽ� �� ���� �κ� ����
��� �˻��� �����Ѵ�. �� str �� ���Ե� ��� vowel ���� ��ġ�� ���ϰ� �ȴ�. ��
������ http://www.cplusplus.com/reference/clibrary/cstring/strpbrk/ ����
�����Խ��ϴ�.
 */
#include <stdio.h>
#include <string.h>

int main() {
	char str[] = "This is a sample string";
	char key[] = "aeiou";
	char* pch;
	printf("Vowels in '%s': ", str);
	pch = strpbrk(str, key);

	while (pch != NULL) {
		printf("%c ", *pch);
		pch = strpbrk(pch + 1, key);
	}
	printf("\n");

	return 0;
}
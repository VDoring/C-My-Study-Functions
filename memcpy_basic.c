#include <stdio.h>
#include <string.h>
int main() {
	char str1[] = "Hello?";
	char str2[40];
	char str3[40];

	memcpy(str2, str1, strlen(str1) + 1); // str2�� str1�� �迭ũ�⿡ 1�� ���� ũ�⸦ �ְ� Hello?�� �����Ѵ�.(str1�� ����� ���ڿ�)
	memcpy(str3, "Copy success", 13); // str3�� Copy success���ڿ��� 13�� ũ�⸦ �ְ� �����Ѵ�. 
	printf("str1 : %s\nstr2 : %s\nstr3 : %s\n", str1, str2, str3);

	return 0;

}

// https://modoocode.com/80
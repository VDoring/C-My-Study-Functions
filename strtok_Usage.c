#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main() {
	char arr[100] = "https://www.youtube.com/watch?v=2cWu_ow99Wk  Geoxor - Moonlight";

	char *ptr = strtok(arr, " "); // " "�� ���ڿ��� �ڸ���. ���� ������ ��ȯ

	printf("%s\n", ptr); //�ڸ� ���ڿ� ���

	return 0;
}
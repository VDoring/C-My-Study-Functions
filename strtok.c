#define _CRT_SECURE_NO_WARNINGS    // strtok ���� ���� ���� ������ ���� ����
#include <stdio.h>
#include <string.h>    // strtok �Լ��� ����� ��� ����

int main()
{
	char s1[30] = "The Little Prince";  // ũ�Ⱑ 30�� char�� �迭�� �����ϰ� ���ڿ� �Ҵ�

	char *ptr = strtok(s1, " ");      // " " ���� ���ڸ� �������� ���ڿ��� �ڸ�, ������ ��ȯ

	while (ptr != NULL)               // �ڸ� ���ڿ��� ������ ���� ������ �ݺ�
	{
		printf("%s\n", ptr);          // �ڸ� ���ڿ� ���
		ptr = strtok(NULL, " ");      // ���� ���ڿ��� �߶� �����͸� ��ȯ
	}

	return 0;
}

//https://dojang.io/mod/page/view.php?id=376
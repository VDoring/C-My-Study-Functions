/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char arr[30] = "Hello there? hahauo";
	char *ptrarr[10] = { NULL, };
	int i = 0;

	char *ptr = strtok(arr, " ");

	while (ptr != NULL) {
		arr[i] = ptr;
		i++;

		ptr = strtok(NULL, " ");
	}

	for (int i = 0; i < 10; i++) {
		if (ptrarr[i] != NULL)
			printf("%s\n", arr[i]);
	}

	return 0;
}
*/

#define _CRT_SECURE_NO_WARNINGS    // strtok ���� ���� ���� ������ ���� ����
#include <stdio.h>
#include <string.h>    // strtok �Լ��� ����� ��� ����

int main()
{
	char s1[30] = "The Little Prince";    // ũ�Ⱑ 30�� char�� �迭�� �����ϰ� ���ڿ� �Ҵ�
	char *sArr[10] = { NULL, };    // ũ�Ⱑ 10�� ���ڿ� ������ �迭�� �����ϰ� NULL�� �ʱ�ȭ
	int i = 0;                     // ���ڿ� ������ �迭�� �ε����� ����� ����

	char *ptr = strtok(s1, " ");   // ���� ���ڿ��� �������� ���ڿ��� �ڸ�

	while (ptr != NULL)            // �ڸ� ���ڿ��� ������ ���� ������ �ݺ�
	{
		sArr[i] = ptr;             // ���ڿ��� �ڸ� �� �޸� �ּҸ� ���ڿ� ������ �迭�� ����
		i++;                       // �ε��� ����

		ptr = strtok(NULL, " ");   // ���� ���ڿ��� �߶� �����͸� ��ȯ
	}

	for (int i = 0; i < 10; i++)
	{
		if (sArr[i] != NULL)           // ���ڿ� ������ �迭�� ��Ұ� NULL�� �ƴ� ����
			printf("%s\n", sArr[i]);   // ���ڿ� ������ �迭�� �ε����� �����Ͽ� �� ���ڿ� ���
	}

	return 0;
}
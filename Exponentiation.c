#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int static_num = 2, input, sum = 0;
	printf("2�� ��ŭ �����ұ��?");
	scanf("%d", &input);

	sum = static_num << input;

	printf("\n\n�����: %u\n", sum);

	return 0;

}
#include <stdio.h>
int main() {
	int num1, num2;
	num1 = printf("12345\n"); //6����(\n����)
	num2 = printf("I love you.\n"); //12����(\n����)
	printf("%d %d", num1, num2); //6 12 ���
								//printf�Լ��� ����ϴ� ������ �� ���� ��ȯ�ϱ⵵ �Ѵ�.(����, ����, \n ���� �����ؼ�)
	return 0;
}
#include <stdio.h>
int main() {
	int ar[] = { 1,2,3,4,5,0 };
	int *ptr = ar;
	int sum = 0;

	while (*ptr) sum += *ptr++; // (1) *ptr�� ���� ���� �д´�
								// (2) ���� ++�� ���� ���� ������ �Ѿ��.
								// �� ������ *ptr�� 0�� �ɋ����� �ݺ�

	printf("%d\n", sum); // 1+2+3+4+5 = 15
}
#include <stdio.h>
int main() {
	int a = 10;
	int b = 20;
	int *pa = &a;
	int *pb = &b;

	printf("%d", (*pa) + (*pb)); // 10 + 20 = 30
	printf("%d", pa + pb); // �����ͳ����� ����(�ּ�+�ּ�). �� ������ ����
}
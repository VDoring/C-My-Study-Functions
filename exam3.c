#include <stdio.h>

int square(int n) { //void�� �ƴ� int(����)�� �����Ѵ�.
	return n * n;
}

int main() {
	int number;
	printf("������ ���� ���ڸ� �����ּ��� : ");
	scanf("%d", &number);

	printf("%d�� ������ %d�Դϴ�", number, square(number));

	return 0;
}
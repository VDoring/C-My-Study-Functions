#include <stdio.h>

int Sum(int a, int b) { //main �Լ� �ؿ� ������ �ȵ�. C���� ���������̶� ���������� �������� ����
	return (a + b);
}

int main() {
	int num1, num2, sum;

	printf("����1 : ");
	scanf("%d", &num1);
	printf("����2 : ");
	scanf("%d", &num2);

	sum = Sum(num1, num2);

	printf("����� %d �Դϴ�\n\n", sum);
	return 0;
}
#include <stdio.h>

void swap(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int num1, num2;
	
	printf("����1: ");
	scanf("%d", &num1);
	printf("\n");
	printf("����2: ");
	scanf("%d", &num2);
	printf("\n");

	printf("�ٲٱ� ��\n");
	printf("����1: %d, ����2: %d\n", num1, num2);

	swap(&num1, &num2);
	printf("�ٲ� ��\n");
	printf("����1: %d, ����2: %d\n", num1, num2);

	return 0;
}

// https://prosto.tistory.com/253
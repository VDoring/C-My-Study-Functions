#include <stdio.h>

void Square(int *n) {
	*n = *n * *n;
}

int main() {
	int num;

	printf("���� �Է�: ");
	scanf("%d", &num);

	Square(&num);
	printf("����: %d", num);

	return 0;
}

// https://prosto.tistory.com/253
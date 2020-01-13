#include <stdio.h>

void Square(int *n) {
	*n = *n * *n;
}

int main() {
	int num;

	printf("숫자 입력: ");
	scanf("%d", &num);

	Square(&num);
	printf("제곱: %d", num);

	return 0;
}

// https://prosto.tistory.com/253
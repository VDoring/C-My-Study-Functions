#include <stdio.h>

void swap(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int num1, num2;
	
	printf("숫자1: ");
	scanf("%d", &num1);
	printf("\n");
	printf("숫자2: ");
	scanf("%d", &num2);
	printf("\n");

	printf("바꾸기 전\n");
	printf("숫자1: %d, 숫자2: %d\n", num1, num2);

	swap(&num1, &num2);
	printf("바꾼 후\n");
	printf("숫자1: %d, 숫자2: %d\n", num1, num2);

	return 0;
}

// https://prosto.tistory.com/253
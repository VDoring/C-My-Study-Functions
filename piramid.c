#include <stdio.h>

int main() {
	int input;
	int i, j;

	scanf("%d", &input);

	for (i = 0; i < input; i++) {
		for (j = 0; j < (input - 1) - i; j++) {
			printf(" ");
		}
		for (j = 0; j < i * 2 + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
}
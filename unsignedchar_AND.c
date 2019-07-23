#include <stdio.h>

int main() {
	unsigned char a = 4; // 0000 0100
	unsigned char b = 8; // 0000 1000
	unsigned char c = a & b;

	printf("4, 8의 AND 연산 값 : %d\n", c);


	a = 6; // 0000 0110
	b = 13; // 0000 1101
	c = a & b;

	printf("6, 13의 AND 연산 값 : %d", c);
}
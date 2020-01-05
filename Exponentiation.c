#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int static_num = 2, input, sum = 0;
	printf("2를 얼만큼 제곱할까요?");
	scanf("%d", &input);

	sum = static_num << input;

	printf("\n\n결과값: %u\n", sum);

	return 0;

}
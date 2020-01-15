#include <stdio.h>
int main() {
	int num1, num2;
	num1 = printf("12345\n"); //6글자(\n포함)
	num2 = printf("I love you.\n"); //12글자(\n포함)
	printf("%d %d", num1, num2); //6 12 출력
								//printf함수는 출력하는 문자의 총 수를 반환하기도 한다.(공백, 문자, \n 등을 포함해서)
	return 0;
}
#include <stdio.h>

int Sum(int a, int b) { //main 함수 밑에 적으면 안됨. C언어는 절차지향이라 위에서부터 차근차근 읽음
	return (a + b);
}

int main() {
	int num1, num2, sum;

	printf("숫자1 : ");
	scanf("%d", &num1);
	printf("숫자2 : ");
	scanf("%d", &num2);

	sum = Sum(num1, num2);

	printf("결과는 %d 입니다\n\n", sum);
	return 0;
}
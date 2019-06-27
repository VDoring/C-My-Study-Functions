#include <stdio.h>

int square(int n) { //void가 아닌 int(정수)로 시작한다.
	return n * n;
}

int main() {
	int number;
	printf("제곱을 구할 숫자를 적어주세요 : ");
	scanf("%d", &number);

	printf("%d의 제곱은 %d입니다", number, square(number));

	return 0;
}

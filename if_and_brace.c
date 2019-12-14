#include <stdio.h>
int main() {
	int num1 = 5;

	if (num1 == 10)
		printf("if 조건문\n"); //if문에서 중괄호 생략시 첫번째 줄만 실행된다
	printf("10입니다.\n"); //중괄호가 없으므로 두번째문단부터는 if문과 상관없이 항상 실행된다.

	return 0;
}

// https://dojang.io/mod/page/view.php?id=120
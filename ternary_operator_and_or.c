#include <stdio.h>
int main() {
	int num1 = 1;
	int num2 = 0;

	printf("%s\n", num1 && num2 ? "참" : "거짓"); //거짓. AND연산자 사용

	printf("%s\n", num1 || num2 ? "참" : "거짓"); //참. OR연산자 사용

	return 0;
}

// https://dojang.io/mod/page/view.php?id=159
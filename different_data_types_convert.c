#include <stdio.h>
int main() {
	long long num1 = 123456789000;
	int num2 = 10;

	// int���� long long�� �ڷ��� ũ�Ⱑ ũ�Ƿ� long long���� ��ȯ��
	printf("%lld\n", num1 + num2); // 123456789010
	printf("%lld\n", num1 - num2); // 123456788990
	printf("%lld\n", num1 * num2); // 1234567890000
	printf("%lld\n", num1 / num2); // 12345678900

	return 0;
}

// https://dojang.io/mod/page/view.php?id=112
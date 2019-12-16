#include <stdio.h>

int main() {
	unsigned char num1 = 1; // 0000 0001
	unsigned char num2 = 3; // 0000 0011


	printf("%d\n", num1 & num2);
	// 0000 0001
	// 01�� 11�� ��Ʈ AND�ϸ� 01�� ��

	printf("%d\n", num1 | num2);
	// 0000 0011
	// 01�� 11�� ��Ʈ OR�ϸ� 11�� ��

	printf("%d\n", num1 ^ num2);
	// 0000 0010
	// 01�� 11�� ��Ʈ XOR�ϸ� 10�� ��


	return 0;
}

// https://dojang.io/mod/page/view.php?id=173
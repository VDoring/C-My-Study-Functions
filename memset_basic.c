#include <stdio.h>
#include <string.h>
int main() {
	char value[5];

	//�޸� ����� ü���
	memset(value, 65, sizeof(value)); //65 �� A �̴�(�ƽ�Ű�ڵ�)
//	void* memset(void* ptr, int value, size_t num);
//	ptr�� �����ϴ� �޸� �ּҺ��� num���� ����Ʈ�� value������ ä���.
//	�̶� value�� unsigned char�� ����ȯ ��

	for (int i = 0; i < (sizeof(value) / sizeof(char)); i++) {
		printf("%c\n", value[i]);
	}
}

// https://twpower.github.io/79-usage-of-memset-function
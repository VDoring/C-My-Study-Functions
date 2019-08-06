#include <stdio.h>
#include <string.h>
int main() {
	char value[5];

	//메모리 블록을 체운다
	memset(value, 65, sizeof(value)); //65 는 A 이다(아스키코드)
//	void* memset(void* ptr, int value, size_t num);
//	ptr로 시작하는 메모리 주소부터 num개의 바이트를 value값으로 채운다.
//	이때 value는 unsigned char로 형변환 됨

	for (int i = 0; i < (sizeof(value) / sizeof(char)); i++) {
		printf("%c\n", value[i]);
	}
}

// https://twpower.github.io/79-usage-of-memset-function
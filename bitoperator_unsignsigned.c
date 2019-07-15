#include <stdio.h>

int main() {
	char a = 1 << 8; // 0000 0001
	int b = 1 << 8; // 0000 0000 0000 0000 0000 0000 0000 0001

	printf("[char] 1 << 0 : %d\n", a);
	printf("[int] 1 << 8 : %d\n", b);

	unsigned char c = 1 << 7;
	char d = 1 << 7;

	printf("[unsigned] 1 << 0 : %d\n", c);
	printf("[signed] 1 << 0 : %d\n", d);

}

// https://edu.goorm.io/learn/lecture/201/%EB%B0%94%EB%A1%9C-%EC%8B%A4%ED%96%89%ED%95%B4%EB%B3%B4%EB%A9%B4%EC%84%9C-%EB%B0%B0%EC%9A%B0%EB%8A%94-c%EC%96%B8%EC%96%B4/lesson/398328/%EB%B9%84%ED%8A%B8-%EC%9D%B4%EB%8F%99-%EC%97%B0%EC%82%B0%EC%9E%90
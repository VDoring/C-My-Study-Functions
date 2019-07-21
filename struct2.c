#include <stdio.h>
int main() {

	struct Point {
		int x, y;
	} pt;

	pt.x = 100;
	pt.y = 50;

	printf("x는 %d입니다.\n", pt.x);
	printf("y는 %d입니다.\n", pt.y);

	return 0;
}

// https://araikuma.tistory.com/568
//기본적인 구조체 사용 방법
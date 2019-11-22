/* prefix, postfix */
#include <stdio.h>
int main() {
	int a = 1;

	printf("++a는 %d\n", ++a);
	// ++a는 해당라인으로 넘어올때 바로 1이 더해짐
	// 즉, 먼저 1을 더한 후 결과를 반환

	a = 1;
	printf("a++는 %d\n", a++);
	// a++는 해당라인이 실행되고 나서 1이 더해짐
	// 즉, 먼저 결과를 반환 후 1을 더함
	printf("현재 a는 %d\n", a);

	return 0;
}

// https://modoocode.com/8
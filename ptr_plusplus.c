#include <stdio.h>
int main() {
	int ar[] = { 1,2,3,4,5,0 };
	int *ptr = ar;
	int sum = 0;

	while (*ptr) sum += *ptr++; // (1) *ptr을 통해 값을 읽는다
								// (2) 이후 ++를 통해 다음 값으로 넘어간다.
								// 이 과정을 *ptr이 0이 될떄까지 반복

	printf("%d\n", sum); // 1+2+3+4+5 = 15
}
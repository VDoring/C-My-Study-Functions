#include <stdio.h>
int main() {
	for (int i = 0; i < 4; i++) {
		printf("%d", i); // 0 1 2 3순으로 작동., 4는 포함되지 않음
	}
	printf("end");
}
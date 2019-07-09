/* 이중 반복문 기본 예제 */

#include <stdio.h>

int main() {

	int i;
	int j;

	for (i = 0; i < 2; i++) {
		printf("-----바깥 for 문 %d 시작-----\n", i);
		for (j = 0; j < 2; j++) {
			printf("%d 번째 안쪽 for 문\n", j);
		}
		printf("-----바깥 for 문 %d 종료-----\n", i);
	}

	return 0;
}
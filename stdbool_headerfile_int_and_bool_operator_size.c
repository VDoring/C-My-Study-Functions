#include <stdio.h>
#include <stdbool.h>    // bool, true, false가 정의된 헤더 파일

int main() {
	printf("int크기: %d\n", sizeof(int)); //4 출력
	printf("bool크기: %d\n", sizeof(bool)); //1 출력

	return 0;
}

// https://dojang.io/mod/page/view.php?id=165
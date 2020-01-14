#include <stdio.h>
#include <stdbool.h> //bool, true, false가 정의된 헤더 파일

int main() {
	bool b1 = true;

	if (b1 == true) printf("참\n"); //b1이 true인지 검사. b1이 true맞으므로 참이 출력된다.
	else printf("거짓\n");

	return 0;
}

// https://dojang.io/mod/page/view.php?id=163
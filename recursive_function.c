/* 재귀함수란? */

#include <stdio.h>

void Recursive(int num);

int main() {
	Recursive(3);
	return 0;
}

void Recursive(int num) {
	if (num <= 0) return;
	printf("Recursive call : %d\n", num);
	Recursive(num - 1);
	/* Recursive함수가 다 끝나지 않은 상태에서 사용이 가능하나요? */
	//네, 실행하는 중간에 복사본을 하나 더 만듭니다. 복사본을 실행하는 것이죠!
}

/*
실행결과)
Recursive call : 3
Recursive call : 2
Recursive call : 1

*/
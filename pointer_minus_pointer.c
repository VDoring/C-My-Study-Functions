#include <stdio.h>

int main() {
	char ar[] = "Pointer";
	char *pi1, *pi2;

	pi1 = &ar[0];
	pi2 = &ar[5];

	printf("%c와 %c의 거리는 %d입니다\n", *pi1, *pi2, pi2 - pi1); // P와 e의 거리는 5입니다

	return 0;
}

/*
포인터끼리 덧셈은 안되지만 뺄샘은 가능하다.
포인터끼리의 덧셈은 주소값+주소값 이기 때문. 즉 의미없음
하지만 뺄샘도 (일반적으로)두 포인터가 같은 배열내의 다른 요소에 가리키고 있을때만 실질적인 의미가 있다.
*/
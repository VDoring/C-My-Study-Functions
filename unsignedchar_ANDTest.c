#include <stdio.h>

int main() {
	unsigned char a = 6;  // 0000 0110
	unsigned char b = 13; // 0000 1101
	unsigned char c = a & b; // 서로 1이되는 부분은 하나밖에 없는데(제 예상 답: 1), 어째서 출력은 4인가요?

	printf("6, 13의 AND 연산 값 : %d\n\n\n\n", c);
}

/*
왜냐하면

 0000 0110 = 6
 0000 1101 = 13
------------
 0000 0100 = 4
 이 된다.

 0 0 -> 0
 0 1 -> 0
 1 0 -> 0
 1 1 -> 1

*/
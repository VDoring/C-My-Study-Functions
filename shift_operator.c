#include <stdio.h>
int main() {
	unsigned char num1 = 3; //0000 0011
	unsigned char num2 = 24; //0001 1000

	// %u는 부호없는 10진수를 말함
	printf("%u\n", num1 << 3); //0001 1000
							   //num1의 비트 값을 왼쪽으로 3번(<< 3)이동

	printf("%u\n", num2 >> 2); //0000 0110
							   //num2의 비트 값을 오른쪽으로 2번 이동

	return 0;
}

// https://dojang.io/mod/page/view.php?id=174
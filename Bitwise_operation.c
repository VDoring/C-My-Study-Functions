#include <stdio.h>
int main() {
	unsigned char num1 = 4; //0000 0100
	unsigned char num2 = 4; //0000 0100
	unsigned char num3 = 4; //0000 0100
	unsigned char num4 = 4; //0000 0100
	unsigned char num5 = 4; //0000 0100

	num1 &= 5; //0000 0101과 AND연산
	num2 |= 2; //0000 0010과 OR연산
	num3 ^= 3; //0000 0011과 XOR연산
	num4 <<= 2; //비트를 왼쪽으로 2번 이동
	num5 >>= 2; //비트르 오른쪽으로 두번 이동

	printf("%u\n", num1); //0000 0100이므로 4출력
	printf("%u\n", num2); //0000 0110이므로 6출력
	printf("%u\n", num3); //0000 0111이므로 2출력
	printf("%u\n", num4); //0001 0000이므로 16출력
	printf("%u\n", num5); //0000 0001이므로 1출력

	return 0;
}

// https://dojang.io/mod/page/view.php?id=181
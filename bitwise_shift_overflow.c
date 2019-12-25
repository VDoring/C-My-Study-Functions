#include <stdio.h>
int main() {
	unsigned char num1 = 240; //1111 0000
	unsigned char num2 = 15;  //0000 1111
	unsigned char num3, num4;

	num3 = num1 << 2; //num1의 비트를 왼쪽으로 2번 이동
	num4 = num2 >> 2; //num2의 비트를 오른쪽으로 2번 이동

	printf("%u\n", num3); //1100 0000. 즉, 192출력
	printf("%u\n", num4); //0000 0011. 즉, 3출력

	return 0;
}
#include <stdio.h>
int main() {
	unsigned char num1 = 4; //0000 0100
	unsigned char num2 = 4; //0000 0100
	unsigned char num3 = 4; //0000 0100
	unsigned char num4 = 4; //0000 0100
	unsigned char num5 = 4; //0000 0100

	num1 &= 5; //0000 0101�� AND����
	num2 |= 2; //0000 0010�� OR����
	num3 ^= 3; //0000 0011�� XOR����
	num4 <<= 2; //��Ʈ�� �������� 2�� �̵�
	num5 >>= 2; //��Ʈ�� ���������� �ι� �̵�

	printf("%u\n", num1); //0000 0100�̹Ƿ� 4���
	printf("%u\n", num2); //0000 0110�̹Ƿ� 6���
	printf("%u\n", num3); //0000 0111�̹Ƿ� 2���
	printf("%u\n", num4); //0001 0000�̹Ƿ� 16���
	printf("%u\n", num5); //0000 0001�̹Ƿ� 1���

	return 0;
}

// https://dojang.io/mod/page/view.php?id=181
#include <stdio.h>
int main() {
	int num[5] = { 100,200,300,400,500 };

	printf("%d\n", sizeof(num)); //4����Ʈ�� 5������
	printf("%d\n", sizeof(num) / sizeof(int)); //int���� 4����Ʈ�̹Ƿ�.
												//20 / 4 = 5
	return 0;
}
#include <stdio.h>
int main() {
	int num[10] = { 0, };

	printf("%d\n", num[0]); //���
	printf("%d\n", num[5]); //�ʱ�ȭ �Ǿ�����
	printf("%d\n", num[9]); //Ȯ��!

	return 0;
}
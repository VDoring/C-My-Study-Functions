/* prefix, postfix */
#include <stdio.h>
int main() {
	int a = 1;

	printf("++a�� %d\n", ++a);
	// ++a�� �ش�������� �Ѿ�ö� �ٷ� 1�� ������
	// ��, ���� 1�� ���� �� ����� ��ȯ

	a = 1;
	printf("a++�� %d\n", a++);
	// a++�� �ش������ ����ǰ� ���� 1�� ������
	// ��, ���� ����� ��ȯ �� 1�� ����
	printf("���� a�� %d\n", a);

	return 0;
}

// https://modoocode.com/8
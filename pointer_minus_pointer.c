#include <stdio.h>

int main() {
	char ar[] = "Pointer";
	char *pi1, *pi2;

	pi1 = &ar[0];
	pi2 = &ar[5];

	printf("%c�� %c�� �Ÿ��� %d�Դϴ�\n", *pi1, *pi2, pi2 - pi1); // P�� e�� �Ÿ��� 5�Դϴ�

	return 0;
}

/*
�����ͳ��� ������ �ȵ����� ������ �����ϴ�.
�����ͳ����� ������ �ּҰ�+�ּҰ� �̱� ����. �� �ǹ̾���
������ ������ (�Ϲ�������)�� �����Ͱ� ���� �迭���� �ٸ� ��ҿ� ����Ű�� �������� �������� �ǹ̰� �ִ�.
*/
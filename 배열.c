#include <stdio.h>
int main()
{
	int number[10] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 110 };

	printf("%d\n", number[0]);
	printf("%d\n", number[4]);
	printf("%d\n\n", number[9]);

	printf("%d\n", sizeof(number)); // 40: 4����Ʈ ũ���� ��Ұ� 10���̹Ƿ� 40.  4 x 10 = 40
	printf("%d\n", sizeof(number) / sizeof(int)); // 10: �迭�� ũ�⸦ ���� ���� ��ü ������ ����� ũ��� ������.  
	return 0;
}
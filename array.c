#include <stdio.h>
int main()
{
	int numArr[5] = { 11, 22, 33, 44, 55 };

	printf("%d\n", numArr[0]); //�迭�� ù��°(�ε��� 0) ���
	printf("%d\n", numArr[5]); // !-����-! 0~4������ �����Ͱ� �����
	printf("%d\n", numArr[3]);

	return 0;
}
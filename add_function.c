#include <stdio.h>

int add(int a, int b)    // ��ȯ�� �ڷ����� int, int�� �Ű����� �� �� ����
{
	return a + b;    // �Ű����� a�� b�� ���� ����� ��ȯ
}

int main()
{
	int num1;

	num1 = add(10, 20);     // �Լ��� ȣ���� �� 10�� 20�� ����. 10�� 20�� ���� ���� 30�� ��ȯ��

	printf("%d\n", num1);   // 30

	return 0;
}
#include <stdio.h>
int main()
{
	int a; //���� a ����
	a = 5; // a �� 5�̴�.
	
	printf("run\n"); //�� ���������� �ǹ��ϴ� �޼���

	if (a == 5) { //���� a�� 5���
		printf("before Goto\n"); //goto�� �����ϱ� ���� Ȯ�� �޽��� 
		goto EXIT; // goto ���
		printf("after Goto\n"); //goto�� �̹� ����� ���� �޼���(����� �ȵǰ���?)
	}
	printf("before goto\n");//goto�� �̵��ϱ� �� Ȯ�� �޼���(����� �ȵǰ���?)
EXIT:
	printf("after goto\n"); //goto�� �̵��� �� Ȯ�� �޼���
	printf("EXIT Success!");//���� Ȯ��!
}
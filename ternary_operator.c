/* [���׿�����] ? :
x ? a : b
���Ǻ� ������. ���ǽ��� ���̸� : ���� ���� ��ȯ. �����̸� : ���� ���� ��ȯ
*/
#include <stdio.h>
int main() {
	int num1 = 5;
	int num2;

	num2 = num1 ? 100 : 200; //num1�� ���Ͻ� num2�� 100 �Ҵ�
							 //num1�� �����Ͻ� num2�� 200 �Ҵ�
							//num1�� ���� 5�̹Ƿ� ��. num2���� 100�� �Ҵ�
	printf("%d\n", num2); //100 ���

	return 0;
}

// https://dojang.io/mod/page/view.php?id=145
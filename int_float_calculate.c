#include <stdio.h>
int main() {
	float num1 = 11.0f;
	float num2 = 5.0f;

	int num3 = num1 / num2; //�Ǽ����� �Ǽ��� ����(11.0 / 5.0) 2.2�� ��������
							//���� �ڷ������� 2�� ����, 0.2�� ��������.

	printf("%d\n", num3); // 2���

	return 0;
}

// https://dojang.io/mod/page/view.php?id=113
#include <stdio.h>
int main() {
	char num1 = 28;
	int num2 = 1000000002;

	char num3 = num1 + num2; //(char���� ū ���ڴ� ������ �� ����)
							//28+2�� ���� ���ڸ����� ��������. 

	printf("%d\n", num3); // 30���

	return 0;
}

// https://dojang.io/mod/page/view.php?id=113
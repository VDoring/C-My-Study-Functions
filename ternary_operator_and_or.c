#include <stdio.h>
int main() {
	int num1 = 1;
	int num2 = 0;

	printf("%s\n", num1 && num2 ? "��" : "����"); //����. AND������ ���

	printf("%s\n", num1 || num2 ? "��" : "����"); //��. OR������ ���

	return 0;
}

// https://dojang.io/mod/page/view.php?id=159
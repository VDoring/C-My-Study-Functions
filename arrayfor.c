#include <stdio.h>
int main() {
	int num[5] = { 100,200,300,400,500 };

	for (int i = 0; i < sizeof(num) / sizeof(int); i++) {
		printf("%d\n", num[i]); //num[i]�� num[1]���� num[5]���� ����ϰ� �Ǿ��ִ�.
	}
	return 0;
}
/* ���� �ݺ��� �⺻ ���� */

#include <stdio.h>

int main() {

	int i;
	int j;

	for (i = 0; i < 2; i++) {
		printf("-----�ٱ� for �� %d ����-----\n", i);
		for (j = 0; j < 2; j++) {
			printf("%d ��° ���� for ��\n", j);
		}
		printf("-----�ٱ� for �� %d ����-----\n", i);
	}

	return 0;
}
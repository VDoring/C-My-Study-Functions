/* ����Լ���? */

#include <stdio.h>

void Recursive(int num);

int main() {
	Recursive(3);
	return 0;
}

void Recursive(int num) {
	if (num <= 0) return;
	printf("Recursive call : %d\n", num);
	Recursive(num - 1);
	/* Recursive�Լ��� �� ������ ���� ���¿��� ����� �����ϳ���? */
	//��, �����ϴ� �߰��� ���纻�� �ϳ� �� ����ϴ�. ���纻�� �����ϴ� ������!
}

/*
������)
Recursive call : 3
Recursive call : 2
Recursive call : 1

*/
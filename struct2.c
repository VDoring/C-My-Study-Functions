#include <stdio.h>
int main() {

	struct Point {
		int x, y;
	} pt;

	pt.x = 100;
	pt.y = 50;

	printf("x�� %d�Դϴ�.\n", pt.x);
	printf("y�� %d�Դϴ�.\n", pt.y);

	return 0;
}

// https://araikuma.tistory.com/568
//�⺻���� ����ü ��� ���
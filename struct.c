#define _CRT_CECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Person { //����ü ����
	char name[20]; //����ü ��� 1
	int age; //����ü ��� 2
	char address[100]; //����ü ��� 3
};

int main() {
	struct Person p1; //����ü ���� ����

	strcpy(p1.name, "ȫ�浿");
	p1.age = 30;
	strcpy(p1.address, "����� ���ﱸ ���ﵿ");

	printf("%s\n", p1.name);
	printf("%d\n", p1.age);
	printf("%s\n", p1.address);
	return 0;
}

// https://dojang.io/mod/page/view.php?id=408
// strcpy�� �̿��� ����ü ��� ���
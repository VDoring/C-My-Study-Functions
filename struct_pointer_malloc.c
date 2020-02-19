#define _CRT_SECURE_NO_WARNINGS    // strcpy ���� ���� ���� ������ ���� ����
#include <stdio.h>
#include <string.h>    // strcpy �Լ��� ����� ��� ����
#include <stdlib.h>    // malloc, free �Լ��� ����� ��� ����

struct Person {
	char name[20];
	int age;
	char address[100];
};

int main() {
	struct Person *p1 = malloc(sizeof(struct Person));

	strcpy(p1->name, "VDO");
	p1->age = 30;
	strcpy(p1->address, "����");

	printf("Name: %s\n", p1->name);		  // VDO
	printf("����: %d\n", p1->age);        // 30
	printf("�ּ�: %s\n", p1->address);    // ����
	
	free(p1);    // ���� �޸� ����

	return 0;
}
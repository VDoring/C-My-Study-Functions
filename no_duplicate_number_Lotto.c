/* �ߺ����� ���� �ζ� */
// https://blog.naver.com/qkd010626/220747460450

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
	printf("�� 6���� ��ȣ�� �ϳ��� �Է����ּ���\n:");
	int UserNum[6] = { 0, }; //����� ���� �Է��� ���� �迭
	for (int i = 0; i < 6; i++) { //6���� �ζǹ�ȣ �Է�
		scanf("%d\n", &UserNum[i]);
	}

	printf("��÷��ȣ ��÷��...\n");
	printf("��÷�� ��ȣ �� ������ ��ȣ�� ���ʽ���ȣ�Դϴ�\n");
	system("pause");
	printf("\n");

	printf("����� �Է��� ���� : ");
	for (int i = 0; i < 6; i++) {
		printf("%d ", UserNum[i]);
	}
	printf("\n\n");

	int lotto[7] = { 0, }; //�ζ� ����


	// ����
	srand(time(NULL));

	for (int i = 0; i < 7; i++) { //�����ζǼ��� �� 7�� ����
		lotto[i] = ((rand() % 45) + 1); //i���� ������� �迭 ĭ���� ����
		for (int j = 0; j < i; j++) { //i���� �� ��ŭ �����ζǼ��� �ߺ� Ȯ��
			if (lotto[i] == lotto[j]) { //i���� ����� �����ζǼ��ڰ� ������ ���� ���ڿ� �������
				lotto[i] = ((rand() % 45) + 1); //���� �ѹ��� ����
				i--; //�ߺ��� ���̹Ƿ� �ٽ� ��������
			}
		}
	}


	// ��º�
	printf("��÷�� ��ȣ");
	for (int i = 0; i < 7; i++) {
		printf("%d ", lotto[i]);
	}
	printf("\n");
	system("pause");


}
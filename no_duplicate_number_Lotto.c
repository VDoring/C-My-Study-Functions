/* �ߺ����� ���� �ζ� */
// https://blog.naver.com/qkd010626/220747460450

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define _CRT_SECURE_NO_WARNINGS

void main() {
	printf("�� 6���� ��ȣ�� �ϳ��� �Է����ּ���\n:");
	int UserNum[6] = { 0, }; //����� ���� �Է��� ���� �迭
	for (int i = 0; i < 6; ++i) {
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

	for (int i = 0; i < 7; i++) {
		lotto[i] = ((rand() % 45) + 1);
		for (int j = 0; j < i; j++) {
			if (lotto[i] == lotto[j]) {
				lotto[i] = ((rand() % 45) + 1);
				i--;
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

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>



void main()
{

	printf("��ȣ 6�� �Է�\n");

	int q[6] = { 0, }; //�Է��� ���� ����

	for (int i = 0; i < 6; i++)
	{
		scanf("%d\n", &q[i]);
	}

	printf("��÷��ȣ 6���� ��÷�ϰڽ��ϴ�. ��÷�� ��ȣ �� ������ ��ȣ�� ���ʽ� ��ȣ�Դϴ�.\n\n");
	system("pause");

	printf("\n");

	printf("����� �Է��� ����:");
	for (int i = 0; i < 6; i++)
	{
		printf("%d ", q[i]);
	}printf("\n\n");



	int lotto[7] = { 0, }; //�ζ� ���� //�̰� ����. ���⿡�� {0,} �ϸ� ������� ó������ ������ 0�� ����.
											 //�׷��� ����
											  //
											   //
											   //
	//����                              //
	srand(time(NULL));              //
	for (int i = 0; i < 7; i++)                //
	{                                        //
		lotto[i] = ((rand() % 45) + 1); //���⼭ �ѹ� �� rand �Լ��� ������ ����.

		for (int j = 0; j < i; j++)
		{
			if (lotto[i] == lotto[j]) //lotto[i] �� lotto[j] �� ���ٸ�
			{
				lotto[i] = ((rand() % 45) + 1); //���� ����
				i--;  //�ڱ� �ڽ��� �ѹ� �� �����ִ� ��
			}
		}
	} //���� ����





	//��º�

	printf("��÷�� ��ȣ:");
	for (int i = 0; i < 7; i++)
	{
		printf("%d\t", lotto[i]);
	}

	printf("\n");
	system("pause");
	//��º� ����
}


*/
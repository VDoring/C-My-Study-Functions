#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <string.h>

gotoxy(int x, int y) {
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int main() {
	int Choose1; //���θ޴����� ù��°�� �����Ҵ� ����ϴ� ����
	int Choose2; //�����쵥���͸� �߰��Ұ��� �����Ұ��� ���ϴ� ����
	
	int Data_number; //Data�迭 �ʱ�ȭ ������ ���� ����
	int Save_count = 0; //�� ���� �������� ��� �迭�� �����͸� ������ ������ ����
	char Data1[2000] = { 0, }; //�����͸� ������ �迭��. 1
	char Data2[2000] = { 0, }; //�����͸� ������ �迭��. 2
	char Data3[2000] = { 0, }; //�����͸� ������ �迭��. 3
	int x = 0, y = 0;

	system("mode con cols=60 lines=30");
	Sleep(10); printf("\t\t\t[[DayWorker]]\n\n\n"); Sleep(300);
	gotoxy(x + 9, y + 3); printf("< Doring"); Sleep(50);
	printf("'s "); Sleep(50);
	printf("Schedule "); Sleep(50);
	printf("management "); Sleep(50);
	printf("programs! >"); Sleep(100);
	while (1) {
		Choose1 = 0, Choose2 = 0, Data_number = 0;
		printf("\n\n\n===========================================================");
		printf("\n\n\n[1]ADD/DELETE Schedule\t[2]Check Schedule\t[3]Quit\n\ninput: ");
		scanf("%d", &Choose1);
		if (Choose1 == 1) { //1�� ���ý�
			system("cls");
			gotoxy(x + 25, y + 1); printf("{ Choose }"); Sleep(50);
			gotoxy(x + 17, y + 3); printf("[1]Add\t\t[2]Delete?\n"); Sleep(10); //������ �߰��ҷ� �����ҷ�?
			gotoxy(x, y + 5); printf("input : ");
			scanf("%d", &Choose2);
			// getchar(); �� ����ؾ��ұ�?
			if (Choose2 == 1) { //1��, �߰���
				gotoxy(x, y + 7); printf("Input your schedule\ninput: ");
				if (Data1[1] == 0) { //����, Data1�� �ƹ��͵� ����Ǿ� ���� ������
					if (Save_count == 0) { //���� Save_count�� 0�϶�
						scanf("%s", &Data1); //Data1�� ����
						printf("\n\t{ Save Number 1 }\n"); Sleep(1000);
						Save_count++; //Save_count 0 -> 1
						system("cls");
					}
				}
				else if (Save_count == 1) { //���� Save_count�� 1�϶�
						if (Data1[1] != 0) { //����, Data1�� ������ ����Ǿ� ������
							scanf("%s", &Data2); //Data2�� ����
							printf("\n\t{ Save Number 2 }\n"); Sleep(1000);
							Save_count++; //Save_count 1 -> 2
							system("cls");
						}
				}
				else if (Data2[1] != 0) { //����, Data2�� ������ ����Ǿ� ������ -!���۾ȵ�!-
						if (Save_count == 2) { //���� Save_count�� 2�϶�
							scanf("%s", &Data3); //Data3�� ����
							printf("Save Number 3\n"); Sleep(1000);
							Save_count++; //Save_count 2 -> 3
							system("cls");
							}
						}

			}
			if (Choose2 == 2) { //2��, ������
				gotoxy(x, y + 7); printf("Input delete number\ninput: ");
				scanf("%d", &Data_number);
				if (Data_number == 1) {
					for (int i = 0; i < 2000; i++) {
						Data1[i] = 0;
					}
					Save_count = 0;
					printf("Data1 Reset Success!\n"); Sleep(1000);
					system("cls");
				}
				else if (Data_number == 2) {
					for (int i = 0; i < 2000; i++) {
						Data2[i] = 0;
					}
					Save_count = 1;
					printf("Data2 Reset Success!\n"); Sleep(1000);
					system("cls");
				}
				else if (Data_number == 3) {
					for (int i = 0; i < 2000; i++) {
						Data3[i] = 0;
					}
					Save_count = 2;
					printf("Data3 Reset Success!\n"); Sleep(1000);
					system("cls");
				}
			}
		}
		if (Choose1 == 2) { //2�� ���ý�
			system("cls");
			printf("\n1.%s\n2.%s\n3.%s\n", Data1, Data2, Data3);
			Sleep(5000); // �� �κ� ���� �ƹ�Ű�� ������ Ÿ��Ʋȭ������ ���ư��� �����
			system("cls");
		}
		if (Choose1 == 3) {
			printf("\n\n\nCheer UP!\n\n\n");
			Sleep(750);
			break;
		}
	}
	
}

/*
if(!a) = if(a == 0)
if(a) = if(a != 0)
*/

/* �����͸� ���������� ������ �� �ִ� ��� ã�� (�ؽ�Ʈ ���� ����� ����� �� �� ������ Ȯ��)*/
/* [N] for��?�� �̿��Ͽ� 0���� 50���� �����ٵ����͸� ������ �� �ִ� �迭�� �����ϱ� (�������� ���� �� �𸣰ڴ�)*/
/* �迭�� ���� ����Ǿ� ���� �ʴٸ�, ����Ǿ����� �ʽ��ϴ� ���� ������ �߰��ϰ� */
/* [S] �迭�� ���� ����Ǿ��ִ��� Ȯ���ϴ� ���� �����. (���� ����ִٸ� �ٸ� �迭�� �ҷ� �Է��ϰ� �Ѵ�.) */
/* ������ �Է½� ���⸦ �ص� �����Ͱ� �� ����ǰԲ� ����� */
/* �����͸� 1~3������ ��� �Է� ��, 1�� 2���� �����ϰ� �ٽ� �����͸� �Է��Ҷ� �׳� �ǳʶ������ �����߻� */
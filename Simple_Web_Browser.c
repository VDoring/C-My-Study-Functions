#include <stdio.h>
int main() {
	int input;

	while (1) {
		printf("��� ����Ʈ�� �̵��Ͻðڽ��ϱ�?\n");
		printf("1. NAVER\t2. Daum\t3. Google\t4.����\n");
		printf("�Է� : ");
		scanf("%d", &input);

		if (input == 1) {
			system("explorer.exe https://www.naver.com");
			printf("���̹��� �̵�.\n");
		}
		else if (input == 2) {
			system("explorer.exe https://www.daum.net");
			printf("�������� �̵�.\n");
		}
		else if (input == 3) {
			system("explorer.exe https://www.google.co.kr");
			printf("���۷� �̵�.\n");
		}
		else if (input == 4) {
			printf("���α׷��� �����մϴ�.\n\n");
			break;
		}
		else printf("�ٽ� �Է����ּ���!\n");
	}
}
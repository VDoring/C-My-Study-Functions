#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int First;
	printf("Welcome to HDR's Rock Scissor Paper Game!\n");
	printf("1. START!\t2. Quit\n");
	scanf("%d", &First);

	if (First == 1) {
		int Rock = 0, Scissor = 1, Paper = 2;
		int player = 0, computer = 0, random;

		computer = 2;
		printf("����� ������ �����Դϱ�?\n\n1.��\t2.��\t3.��\n");
		printf("�߷��Ϸ��� 99�Է�\n");
		scanf("%d", &player);

		if (computer == player) {
			printf("�����ϴ�!");
		}
		if (computer < player && player < Paper) {
			printf("\n��ǻ�ʹ� ��, ����� � �½��ϴ�.\n");
			printf("[result] : ����� �й�");
		}
		if (computer < player && computer == player - 1) {
			printf("\n��ǻ�ʹ� ��, ����� ���� �½��ϴ�.\n");
			printf("[result] : ����� �й�");
		}
		if (computer > player && player == computer - 2) {
			printf("\n��ǻ�ʹ� ��, ����� ���� �½��ϴ� .\n");
			printf("[result] : ����� �й�");
		}
		if (computer < player && computer == player - 2) {
			printf("\n��ǻ�ʹ� ��, ����� ���� �½��ϴ�.\n");
			printf("[result] : ����� �¸�");
		}
		if (computer > player && player == computer - 1) {
			printf("\n��ǻ�ʹ� ��, ����� ���� �½��ϴ�.\n");
			printf("[result] : ����� �¸�");
		}
		if (computer > player && player < Rock) {
			printf("\n��ǻ�ʹ� ��, ����� � �½��ϴ�.\n");
			printf("[result] : ����� �¸�");
		}
	}
	if (First == 2) {
		printf("���α׷��� �����մϴ�!");
	}
}
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
		printf("당신은 무엇을 낼것입니까?\n\n1.묵\t2.찌\t3.빠\n");
		printf("중료하려면 99입력\n");
		scanf("%d", &player);

		if (computer == player) {
			printf("비겼습니다!");
		}
		if (computer < player && player < Paper) {
			printf("\n컴퓨터는 묵, 당신은 찌를 냈습니다.\n");
			printf("[result] : 당신의 패배");
		}
		if (computer < player && computer == player - 1) {
			printf("\n컴퓨터는 찌, 당신은 빠를 냈습니다.\n");
			printf("[result] : 당신의 패배");
		}
		if (computer > player && player == computer - 2) {
			printf("\n컴퓨터는 빠, 당신은 묵을 냈습니다 .\n");
			printf("[result] : 당신의 패배");
		}
		if (computer < player && computer == player - 2) {
			printf("\n컴퓨터는 묵, 당신은 빠를 냈습니다.\n");
			printf("[result] : 당신의 승리");
		}
		if (computer > player && player == computer - 1) {
			printf("\n컴퓨터는 찌, 당신은 묵을 냈습니다.\n");
			printf("[result] : 당신의 승리");
		}
		if (computer > player && player < Rock) {
			printf("\n컴퓨터는 빠, 당신은 찌를 냈습니다.\n");
			printf("[result] : 당신의 승리");
		}
	}
	if (First == 2) {
		printf("프로그램을 종료합니다!");
	}
}
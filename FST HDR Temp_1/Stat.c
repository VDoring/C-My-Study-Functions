/* 폴아웃 4를 모티브로 만들어진 캐릭터 스탯 시스템 */

#include <stdio.h>
int main()
{
	int select; //시작, 초기화 뭐할지 정하는 변수
	
	int Strength = 0;
	int Perception = 0;
	int Endurance = 0;
	int Charisma = 0;
	int Intelligence = 0;
	int Agility = 0;
	int Luck = 0;

	int STATPOINT = 28; //사용할 수 있는 스탯초인트(힘, 민첩등을 찍을때 사용)
	int STATNAME = 0; //어떤 스탯을 고르는지 구별하는 역할


	printf("-- Your STAT System --\n");

	while (1) {
		printf("\n(1) Start     (2) Reset     (3)Quit\n");
		scanf("%d", &select);

		if (select == 1) { //시작선택지
			while (1) {
				printf("\n\nYour STAT Point : <%d>\n\n", STATPOINT);
				printf(" [%d] 힘(Strength) - 당신의 강력한 힘으로 이 전장을 휩쓸수 있습니다!\n [%d] 인지(Perception) - 오감을 예만하게하세요. 당신은 전장의 모든 성황을 알 수 있습니다.\n [%d] 체력(Endurance) - 움직이는 것 말고도 당신의 강인한 체력은 모든 상황에서 도움이 됩니다!\n [%d] 카리스마(Charisma) - 사람들을 휘어잡고 싶으신가요? 이것 하나면 가능합니다!\n [%d] 지능(Intelligence) - 무지함은 모든 행동의 효율성을 저하시킵니다. 이 세상에도 배움의 길은 필요하거든요.\n [%d] 민첩(Agility) - 근접이거나 원거리나 민첩함은 당신을 전장의 특별한 존재로 만들어줍니다!\n [%d] 행운(Luck) - 새상일은 아무도 모릅니다. 행운의 여신이 나와 함께하길..\n", Strength, Perception, Endurance, Charisma, Intelligence, Agility, Luck);
				printf("\n올리고싶은 스탯의 번호을 적으세요 = ");
				scanf("%d", &STATNAME);
				if (STATNAME == 1) {
					Strength++;
					STATPOINT--;
					if (STATPOINT < 0) {
						printf("\n모든 스탯포인트를 다 사용했습니다.");
						STATPOINT++;
						Strength--;
					}
					if (Strength == 11) {
						printf("\n이미 해당 스탯이 최대치입니다.");
						STATPOINT++;
						Strength--;
					}
					printf("\n현제 \"힘\"스탯의 수 : %d", Strength);
				}
				if (STATNAME == 2) {
					Perception++;
					STATPOINT--;
					if (STATPOINT < 0) {
						printf("\n모든 스탯포인트를 다 사용했습니다.");
						STATPOINT++;
						Perception--;
					}
					if (Perception == 11) {
						printf("\n이미 해당 스탯이 최대치입니다.");
						STATPOINT++;
						Perception--;
					}
					printf("\n현제 \"인지\"스탯의 수 : %d", Perception);
				}
				if (STATNAME == 3) {
					Endurance++;
					STATPOINT--;
					if (STATPOINT < 0) {
						printf("\n모든 스탯포인트를 다 사용했습니다.");
						STATPOINT++;
						Endurance--;
					}
					if (Endurance == 11) {
						printf("\n이미 해당 스탯이 최대치입니다.");
						STATPOINT++;
						Endurance--;
					}
					printf("\n현제 \"체력\"스탯의 수 : %d", Endurance);
				}
				if (STATNAME == 4) {
					Charisma++;
					STATPOINT--;
					if (STATPOINT < 0) {
						printf("\n모든 스탯포인트를 다 사용했습니다.");
						STATPOINT++;
						Charisma--;
					}
					if (Charisma == 11) {
						printf("\n이미 해당 스탯이 최대치입니다.");
						STATPOINT++;
						Charisma--;
					}
					printf("\n현제 \"카리스마\"스탯의 수 : %d", Charisma);
				}
				if (STATNAME == 5) {
					Intelligence++;
					STATPOINT--;
					if (STATPOINT < 0) {
						printf("\n모든 스탯포인트를 다 사용했습니다.");
						STATPOINT++;
						Intelligence--;
					}
					if (Intelligence == 11) {
						printf("\n이미 해당 스탯이 최대치입니다.");
						STATPOINT++;
						Intelligence--;
					}
					printf("\n현제 \"지능\"스탯의 수 : %d", Intelligence);
				}
				if (STATNAME == 6) {
					Agility++;
					STATPOINT--;
					if (STATPOINT < 0) {
						printf("\n모든 스탯포인트를 다 사용했습니다.");
						STATPOINT++;
						Agility--;
					}
					if (Agility == 11) {
						printf("\n이미 해당 스탯이 최대치입니다.");
						STATPOINT++;
						Agility--;
					}
					printf("\n현제 \"민첩\"스탯의 수 : %d", Agility);
				}
				if (STATNAME == 7) {
					Luck++;
					STATPOINT--;
					if (STATPOINT < 0) {
						printf("\n모든 스탯포인트를 다 사용했습니다.");
						STATPOINT++;
						Luck--;
					}
					if (Luck == 11) {
						printf("\n이미 해당 스탯이 최대치입니다.");
						STATPOINT++;
						Luck--;
					}
					printf("\n현제 \"행운\"스탯의 수 : %d", Luck);
				}
				if (STATNAME == 99) {
					printf("\n\n<메인화면으로 돌아갑니다.>\n\n");
					break;
				}
				else if (STATNAME < 0 || STATNAME > 7) {
					printf("다시 입력해주세요");
				}
			}
		}
		else if (select == 2) { //초기화선택지
			Strength = 0, Perception = 0, Endurance = 0, Charisma = 0, Intelligence = 0, Agility = 0, Luck = 0;
			STATPOINT = 28;
			printf("초기화 완료");
		}
		else if (select == 3) {
			printf(" - 시스템이 종료됩니다 -");
			break;
		}
		else {
			printf("\n <다시 입력 해주세요>");
		}
	}
	printf("\n좋은 하루 되세요!\n\n\n\n");
	return 0;
}

/*

문제점 : 스탯을 최대까지 찍었을때 '현재 스탯의 수 : 11'로 나옴.
11을 10으로 나오게끔 개선이 필요함

추가하기 : 힘이나 민첩등의 스탯을 1씩 올리지 말고, 얼마만큼 올릴건지 사용자가 직접 입력하도록 한다.

*/
/* ���ƿ� 4�� ��Ƽ��� ������� ĳ���� ���� �ý��� */

#include <stdio.h>
int main()
{
	int select; //����, �ʱ�ȭ ������ ���ϴ� ����
	
	int Strength = 0;
	int Perception = 0;
	int Endurance = 0;
	int Charisma = 0;
	int Intelligence = 0;
	int Agility = 0;
	int Luck = 0;

	int STATPOINT = 28; //����� �� �ִ� ��������Ʈ(��, ��ø���� ������ ���)
	int STATNAME = 0; //� ������ ������ �����ϴ� ����


	printf("-- Your STAT System --\n");

	while (1) {
		printf("\n(1) Start     (2) Reset     (3)Quit\n");
		scanf("%d", &select);

		if (select == 1) { //���ۼ�����
			while (1) {
				printf("\n\nYour STAT Point : <%d>\n\n", STATPOINT);
				printf(" [%d] ��(Strength) - ����� ������ ������ �� ������ �۾��� �ֽ��ϴ�!\n [%d] ����(Perception) - ������ �����ϰ��ϼ���. ����� ������ ��� ��Ȳ�� �� �� �ֽ��ϴ�.\n [%d] ü��(Endurance) - �����̴� �� ���� ����� ������ ü���� ��� ��Ȳ���� ������ �˴ϴ�!\n [%d] ī������(Charisma) - ������� �־���� �����Ű���? �̰� �ϳ��� �����մϴ�!\n [%d] ����(Intelligence) - �������� ��� �ൿ�� ȿ������ ���Ͻ�ŵ�ϴ�. �� ���󿡵� ����� ���� �ʿ��ϰŵ��.\n [%d] ��ø(Agility) - �����̰ų� ���Ÿ��� ��ø���� ����� ������ Ư���� ����� ������ݴϴ�!\n [%d] ���(Luck) - �������� �ƹ��� �𸨴ϴ�. ����� ������ ���� �Բ��ϱ�..\n", Strength, Perception, Endurance, Charisma, Intelligence, Agility, Luck);
				printf("\n�ø������ ������ ��ȣ�� �������� = ");
				scanf("%d", &STATNAME);
				if (STATNAME == 1) {
					Strength++;
					STATPOINT--;
					if (STATPOINT < 0) {
						printf("\n��� ��������Ʈ�� �� ����߽��ϴ�.");
						STATPOINT++;
						Strength--;
					}
					if (Strength == 11) {
						printf("\n�̹� �ش� ������ �ִ�ġ�Դϴ�.");
						STATPOINT++;
						Strength--;
					}
					printf("\n���� \"��\"������ �� : %d", Strength);
				}
				if (STATNAME == 2) {
					Perception++;
					STATPOINT--;
					if (STATPOINT < 0) {
						printf("\n��� ��������Ʈ�� �� ����߽��ϴ�.");
						STATPOINT++;
						Perception--;
					}
					if (Perception == 11) {
						printf("\n�̹� �ش� ������ �ִ�ġ�Դϴ�.");
						STATPOINT++;
						Perception--;
					}
					printf("\n���� \"����\"������ �� : %d", Perception);
				}
				if (STATNAME == 3) {
					Endurance++;
					STATPOINT--;
					if (STATPOINT < 0) {
						printf("\n��� ��������Ʈ�� �� ����߽��ϴ�.");
						STATPOINT++;
						Endurance--;
					}
					if (Endurance == 11) {
						printf("\n�̹� �ش� ������ �ִ�ġ�Դϴ�.");
						STATPOINT++;
						Endurance--;
					}
					printf("\n���� \"ü��\"������ �� : %d", Endurance);
				}
				if (STATNAME == 4) {
					Charisma++;
					STATPOINT--;
					if (STATPOINT < 0) {
						printf("\n��� ��������Ʈ�� �� ����߽��ϴ�.");
						STATPOINT++;
						Charisma--;
					}
					if (Charisma == 11) {
						printf("\n�̹� �ش� ������ �ִ�ġ�Դϴ�.");
						STATPOINT++;
						Charisma--;
					}
					printf("\n���� \"ī������\"������ �� : %d", Charisma);
				}
				if (STATNAME == 5) {
					Intelligence++;
					STATPOINT--;
					if (STATPOINT < 0) {
						printf("\n��� ��������Ʈ�� �� ����߽��ϴ�.");
						STATPOINT++;
						Intelligence--;
					}
					if (Intelligence == 11) {
						printf("\n�̹� �ش� ������ �ִ�ġ�Դϴ�.");
						STATPOINT++;
						Intelligence--;
					}
					printf("\n���� \"����\"������ �� : %d", Intelligence);
				}
				if (STATNAME == 6) {
					Agility++;
					STATPOINT--;
					if (STATPOINT < 0) {
						printf("\n��� ��������Ʈ�� �� ����߽��ϴ�.");
						STATPOINT++;
						Agility--;
					}
					if (Agility == 11) {
						printf("\n�̹� �ش� ������ �ִ�ġ�Դϴ�.");
						STATPOINT++;
						Agility--;
					}
					printf("\n���� \"��ø\"������ �� : %d", Agility);
				}
				if (STATNAME == 7) {
					Luck++;
					STATPOINT--;
					if (STATPOINT < 0) {
						printf("\n��� ��������Ʈ�� �� ����߽��ϴ�.");
						STATPOINT++;
						Luck--;
					}
					if (Luck == 11) {
						printf("\n�̹� �ش� ������ �ִ�ġ�Դϴ�.");
						STATPOINT++;
						Luck--;
					}
					printf("\n���� \"���\"������ �� : %d", Luck);
				}
				if (STATNAME == 99) {
					printf("\n\n<����ȭ������ ���ư��ϴ�.>\n\n");
					break;
				}
				else if (STATNAME < 0 || STATNAME > 7) {
					printf("�ٽ� �Է����ּ���");
				}
			}
		}
		else if (select == 2) { //�ʱ�ȭ������
			Strength = 0, Perception = 0, Endurance = 0, Charisma = 0, Intelligence = 0, Agility = 0, Luck = 0;
			STATPOINT = 28;
			printf("�ʱ�ȭ �Ϸ�");
		}
		else if (select == 3) {
			printf(" - �ý����� ����˴ϴ� -");
			break;
		}
		else {
			printf("\n <�ٽ� �Է� ���ּ���>");
		}
	}
	printf("\n���� �Ϸ� �Ǽ���!\n\n\n\n");
	return 0;
}

/*

������ : ������ �ִ���� ������� '���� ������ �� : 11'�� ����.
11�� 10���� �����Բ� ������ �ʿ���

�߰��ϱ� : ���̳� ��ø���� ������ 1�� �ø��� ����, �󸶸�ŭ �ø����� ����ڰ� ���� �Է��ϵ��� �Ѵ�.

*/
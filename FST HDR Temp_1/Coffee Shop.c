/* ī�信�� Ŀ�� �����ϱ� */
/* HDR ���� ����*/

#include <stdio.h>
int main()
{
	int first = 0; //� Ŀ�Ǹ� ������ ���ϴ� ����
	int value = 0; //�� Ŀ���� ����(�� Ŀ�� ������� �ٷ� �ʱ�ȭ)
	int sum = 0; //����� �� �� �հ�
	int a = 0;
	int b = 0;
	int c = 0;
	char cof_1[50] = { 'A', 'M', 'R', 'I', 'C', 'A', 'N', 'O', 0 };
	char cof_2[50] = { 'I', 'C', 'E', 0 };
	char cof_3[50] = { 'A','D','V','E','N','C','E','D', 0 };
	char coffee_1[50];
	char coffee_2[50];
	char coffee_3[50];

	strcpy(coffee_1, cof_1);
	strcpy(coffee_2, cof_2);
	strcpy(coffee_3, cof_3);

	printf(" _________________________________________ \n    - HDR�� ī�信 ���Ű� ȯ���մϴ�! - \n _________________________________________");
	printf("\n1. �Ƹ޸�ī�� (300��)\n2. ���̽� �Ƹ޸�ī�� (400��)\n3. ���꽺�� �Ƹ޸�ī�� (450��)\n4. <�ֹ��Ϸ�>\n"); //����
	printf("\n���� ���Ḧ ���ðڽ��ϱ�? => ");
	scanf(" %d", &first);

	while(1) { //���� �ݺ���
		if (first == 1) { //1�� ����
			a++;
			value = 300; //1���� ������ 300
			printf("�Ƹ޸�ī�밡 �ֹ����� �߰��Ǿ����ϴ�.");
			sum += value;
			printf("���� ���:%d", sum);
			printf("\n���� ���Ḧ ���ðڽ��ϱ�? => ");
			scanf(" %d", &first);
		}
		else if (first == 2) {
			b++;
			value = 400;
			printf("���̽� �Ƹ޸�ī�밡 �ֹ����� �߰��Ǿ����ϴ�.");
			sum += value;
			printf("���� ���:%d", sum);
			printf("\n���� ���Ḧ ���ðڽ��ϱ�? => ");
			scanf(" %d", &first);
		}
		else if (first == 3) {
			c++;
			value = 450;
			printf("ADVANCED �Ƹ޸�ī�밡 �ֹ����� �߰��Ǿ����ϴ�.");
			sum += value;
			printf("���� ���:%d", sum);
			printf("\n���� ���Ḧ ���ðڽ��ϱ�? => ");
			scanf(" %d", &first);
		}
		else if (first == 4) {
			printf("\n\n����� �ֹ��Ͻ� Ŀ�Ǵ�\n_________________________________________ \n%s x%d\n%s x%d\n%s x%d\n _________________________________________ \n�Դϴ�.\n\n", coffee_1, a, coffee_2, b, coffee_3, c);
			printf("\n����� �� ����� %d�� �Դϴ�!", sum);
			break; //���� �ݺ��� ����
		}
		else {
			printf("�ٽ� �Է����ּ��� => ");
			scanf(" %d", &first);
		}
	}
	printf("\n\n -- �̿����ּż� �����մϴ�! -- \n\n\n");
}
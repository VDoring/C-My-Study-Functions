/* �̸��� �Է��� ������ ������� �� ��� ���� ���α׷� */
/* Python������ �����Ͽ� HDR���� ���� */

#include <stdio.h>
int main()
{
	printf("__HDR's ����ó�� ���α׷�!__\n\n");
	char name[30];
	int sum, avg, korean, english, math; //����

	printf("����� �̸��� �Է����ּ��� -> "); //�̸��Է�
	scanf("%s", &name);

	while (1) {
		printf("\n [1] ����� ����������? = "); //��������
		scanf("%d", &korean);
		if (korean < 0 || korean > 101) {
				printf("�ٽ� �Է����ּ���\n"); // WARN. �� �̰� �ȶ���?---------------------------
		}
			if (korean >= 0 && korean <= 100) break;
	}

	while (1) {
		printf("\n [2] ����� ����������? = "); //��������
		scanf("%d", &english);
		if (english < 0 || english > 101) {
			printf("�ٽ� �Է����ּ���\n"); // WARN. �� �̰� �ȶ���?---------------------------
		}
			if (english >= 0 && english <= 100) break;
	}

	while (1) {
		printf("\n [3] ����� ����������? = "); //��������
		scanf("%d", &math);
		if (math < 0 || math > 101) {
			printf("�ٽ� �Է����ּ���\n"); // WARN. �� �̰� �ȶ���?---------------------------
		}
			if (math >= 0 && math <= 100) break;
	}

	sum = korean + english + math;
	printf("\n%s���� ������ %d�� �Դϴ�.", name, sum);

	avg = (korean + english + math) / 3;
	printf("\n%s���� ����� %d���Դϴ�.", name, avg);

	if (avg >= 90) {
		printf("\n\n����� ������ A�Դϴ�. ���ϵ帳�ϴ�!");
	}
	else if (avg >= 80) {
		printf("\n\n����� ������ B�Դϴ�.");
	}
	else if (avg >= 70) {
		printf("\n\n����� ������ C�Դϴ�.");
	}
	else if (avg >= 60) {
		printf("\n\n����� ������ D�Դϴ�. �ƽ��׿� -_-;");
	}
	else
		printf("\n\n����� ������ E�Դϴ�. ��¼�� �̷�����....");
}

/*

 _2019.05.11

������ : AND�����ڸ� OR�����ڷ� �ٲٸ鼭 "�ٽ� �Է����ּ���" ����� �����ϰ���

������ : ���� �Է½� ���ڰ� �ƴ� ���ڸ� ������ �ش� �����Է�ĭ�� ���ѹݺ��Ǵ� �����߻�

*/

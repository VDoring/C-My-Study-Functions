#include <stdio.h>

int main()
{
	char stack[5];
	int top = 0;
	char CarName = 'A';
	int select = 0;

	while(1) {
	printf("\n<1> �� �ֱ� <2> �� ���� <3> ���� :");
	scanf_s("%d", &select);

		switch (select)
		{
		case 1:
			if (top >= 5) {
				printf("���� �� ���� �� �� �����ϴ�.");
			}
			else {
				stack[top] = CarName++;
				printf("%c �ڵ����� ������ ��.", stack[top]);
				top++;
			}
			break;

		case 2:
			if (top <= 0) {
				printf("�������� ����־� ���� ���� �� �����ϴ�.");
			}
			else {
				top--;
				printf("%c �ڵ����� ������ ������.", stack[top]);
				stack[top] = ' ';
			}
			break;

		case 3:
			printf("���� �����忡 %d ���� �ڵ����� �ֽ��ϴ�.", top);
			printf("���α׷��� �����մϴ�.");
			return 1;
		default:
			printf("�߸� �Է��ϼ̽��ϴ�.");
		}
	}
}
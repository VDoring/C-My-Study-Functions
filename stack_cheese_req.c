#include <stdio.h>

int main()
{
	char stack[5];
	int top = 0;
	char CarName = 'A';
	int select = 0;

	while(1) {
	printf("\n<1> 차 넣기 <2> 차 빼기 <3> 종료 :");
	scanf_s("%d", &select);

		switch (select)
		{
		case 1:
			if (top >= 5) {
				printf("차가 꽉 차서 들어갈 수 없습니다.");
			}
			else {
				stack[top] = CarName++;
				printf("%c 자동차가 안으로 들어감.", stack[top]);
				top++;
			}
			break;

		case 2:
			if (top <= 0) {
				printf("주차장이 비어있어 차를 빼낼 수 없습니다.");
			}
			else {
				top--;
				printf("%c 자동차를 밖으로 내보냄.", stack[top]);
				stack[top] = ' ';
			}
			break;

		case 3:
			printf("현재 주차장에 %d 대의 자동차가 있습니다.", top);
			printf("프로그램을 종료합니다.");
			return 1;
		default:
			printf("잘못 입력하셨습니다.");
		}
	}
}
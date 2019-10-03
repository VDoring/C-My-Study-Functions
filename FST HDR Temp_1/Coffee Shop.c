/* 카페에서 커피 구매하기 */
/* HDR 직접 제작*/

#include <stdio.h>
int main()
{
	int first = 0; //어떤 커피를 마실지 정하는 변수
	int value = 0; //고른 커피의 가격(한 커피 사용이후 바로 초기화)
	int sum = 0; //계산할 돈 총 합계
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

	printf(" _________________________________________ \n    - HDR의 카페에 오신걸 환영합니다! - \n _________________________________________");
	printf("\n1. 아메리카노 (300원)\n2. 아이스 아메리카노 (400원)\n3. 어드밴스드 아메리카노 (450원)\n4. <주문완료>\n"); //설명
	printf("\n무슨 음료를 고르시겠습니까? => ");
	scanf(" %d", &first);

	while(1) { //무한 반복문
		if (first == 1) { //1번 선택
			a++;
			value = 300; //1번의 가격은 300
			printf("아메리카노가 주문서에 추가되었습니다.");
			sum += value;
			printf("현제 요금:%d", sum);
			printf("\n무슨 음료를 고르시겠습니까? => ");
			scanf(" %d", &first);
		}
		else if (first == 2) {
			b++;
			value = 400;
			printf("아이스 아메리카노가 주문서에 추가되었습니다.");
			sum += value;
			printf("현제 요금:%d", sum);
			printf("\n무슨 음료를 고르시겠습니까? => ");
			scanf(" %d", &first);
		}
		else if (first == 3) {
			c++;
			value = 450;
			printf("ADVANCED 아메리카노가 주문서에 추가되었습니다.");
			sum += value;
			printf("현제 요금:%d", sum);
			printf("\n무슨 음료를 고르시겠습니까? => ");
			scanf(" %d", &first);
		}
		else if (first == 4) {
			printf("\n\n당신이 주문하신 커피는\n_________________________________________ \n%s x%d\n%s x%d\n%s x%d\n _________________________________________ \n입니다.\n\n", coffee_1, a, coffee_2, b, coffee_3, c);
			printf("\n당신의 총 요금은 %d원 입니다!", sum);
			break; //무한 반복문 종료
		}
		else {
			printf("다시 입력해주세요 => ");
			scanf(" %d", &first);
		}
	}
	printf("\n\n -- 이용해주셔서 감사합니다! -- \n\n\n");
}
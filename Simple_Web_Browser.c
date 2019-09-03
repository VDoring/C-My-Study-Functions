#include <stdio.h>
int main() {
	int input;

	while (1) {
		printf("어느 사이트로 이동하시겠습니까?\n");
		printf("1. NAVER\t2. Daum\t3. Google\t4.종료\n");
		printf("입력 : ");
		scanf("%d", &input);

		if (input == 1) {
			system("explorer.exe https://www.naver.com");
			printf("네이버로 이동.\n");
		}
		else if (input == 2) {
			system("explorer.exe https://www.daum.net");
			printf("다음으로 이동.\n");
		}
		else if (input == 3) {
			system("explorer.exe https://www.google.co.kr");
			printf("구글로 이동.\n");
		}
		else if (input == 4) {
			printf("프로그램을 종료합니다.\n\n");
			break;
		}
		else printf("다시 입력해주세요!\n");
	}
}
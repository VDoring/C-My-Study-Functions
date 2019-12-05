/* 중복숫자 없는 로또 */
// https://blog.naver.com/qkd010626/220747460450

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
	printf("총 6개의 번호를 하나씩 입력해주세요\n:");
	int UserNum[6] = { 0, }; //사용자 숫자 입력을 위한 배열
	for (int i = 0; i < 6; i++) { //6개의 로또번호 입력
		scanf("%d\n", &UserNum[i]);
	}

	printf("당첨번호 추첨중...\n");
	printf("추첨된 번호 중 마지막 번호는 보너스번호입니다\n");
	system("pause");
	printf("\n");

	printf("당신이 입력한 숫자 : ");
	for (int i = 0; i < 6; i++) {
		printf("%d ", UserNum[i]);
	}
	printf("\n\n");

	int lotto[7] = { 0, }; //로또 선언


	// 계산부
	srand(time(NULL));

	for (int i = 0; i < 7; i++) { //랜덤로또숫자 총 7개 뽑음
		lotto[i] = ((rand() % 45) + 1); //i값을 기반으로 배열 칸마다 저장
		for (int j = 0; j < i; j++) { //i값이 간 만큼 랜덤로또숫자 중복 확인
			if (lotto[i] == lotto[j]) { //i값에 저장된 랜덤로또숫자가 이전에 뽑힌 숫자와 같은경우
				lotto[i] = ((rand() % 45) + 1); //랜덤 한번더 돌림
				i--; //중복된 값이므로 다시 돌려야함
			}
		}
	}


	// 출력부
	printf("당첨된 번호");
	for (int i = 0; i < 7; i++) {
		printf("%d ", lotto[i]);
	}
	printf("\n");
	system("pause");


}
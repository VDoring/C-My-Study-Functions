/* 중복숫자 없는 로또 */
// https://blog.naver.com/qkd010626/220747460450

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define _CRT_SECURE_NO_WARNINGS

void main() {
	printf("총 6개의 번호를 하나씩 입력해주세요\n:");
	int UserNum[6] = { 0, }; //사용자 숫자 입력을 위한 배열
	for (int i = 0; i < 6; ++i) {
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

	for (int i = 0; i < 7; i++) {
		lotto[i] = ((rand() % 45) + 1);
		for (int j = 0; j < i; j++) {
			if (lotto[i] == lotto[j]) {
				lotto[i] = ((rand() % 45) + 1);
				i--;
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

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>



void main()
{

	printf("번호 6개 입력\n");

	int q[6] = { 0, }; //입력을 위한 선언

	for (int i = 0; i < 6; i++)
	{
		scanf("%d\n", &q[i]);
	}

	printf("당첨번호 6개를 추첨하겠습니다. 추첨된 번호 중 마지막 번호는 보너스 번호입니다.\n\n");
	system("pause");

	printf("\n");

	printf("당신이 입력한 숫자:");
	for (int i = 0; i < 6; i++)
	{
		printf("%d ", q[i]);
	}printf("\n\n");



	int lotto[7] = { 0, }; //로또 선언 //이거 조심. 여기에서 {0,} 하면 결과에서 처음에는 무조건 0이 나옴.
											 //그래서 여기
											  //
											   //
											   //
	//계산부                              //
	srand(time(NULL));              //
	for (int i = 0; i < 7; i++)                //
	{                                        //
		lotto[i] = ((rand() % 45) + 1); //여기서 한번 더 rand 함수를 돌려준 것임.

		for (int j = 0; j < i; j++)
		{
			if (lotto[i] == lotto[j]) //lotto[i] 와 lotto[j] 가 같다면
			{
				lotto[i] = ((rand() % 45) + 1); //범위 지정
				i--;  //자기 자신을 한번 더 돌려주는 것
			}
		}
	} //계산부 종료





	//출력부

	printf("당첨된 번호:");
	for (int i = 0; i < 7; i++)
	{
		printf("%d\t", lotto[i]);
	}

	printf("\n");
	system("pause");
	//출력부 종료
}


*/
/* 이름과 입력한 점수를 기반으로 한 등수 측정 프로그램 */
/* Python예제를 참고하여 HDR직접 제작 */

#include <stdio.h>
int main()
{
	printf("__HDR's 학점처리 프로그램!__\n\n");
	char name[30];
	int sum, avg, korean, english, math; //선언

	printf("당신의 이름을 입력해주세요 -> "); //이름입력
	scanf("%s", &name);

	while (1) {
		printf("\n [1] 당신의 국어점수는? = "); //국어점수
		scanf("%d", &korean);
		if (korean < 0 || korean > 101) {
				printf("다시 입력해주세요\n"); // WARN. 왜 이게 안뜨지?---------------------------
		}
			if (korean >= 0 && korean <= 100) break;
	}

	while (1) {
		printf("\n [2] 당신의 영어점수는? = "); //영어점수
		scanf("%d", &english);
		if (english < 0 || english > 101) {
			printf("다시 입력해주세요\n"); // WARN. 왜 이게 안뜨지?---------------------------
		}
			if (english >= 0 && english <= 100) break;
	}

	while (1) {
		printf("\n [3] 당신의 수학점수는? = "); //수학점수
		scanf("%d", &math);
		if (math < 0 || math > 101) {
			printf("다시 입력해주세요\n"); // WARN. 왜 이게 안뜨지?---------------------------
		}
			if (math >= 0 && math <= 100) break;
	}

	sum = korean + english + math;
	printf("\n%s님의 총점은 %d점 입니다.", name, sum);

	avg = (korean + english + math) / 3;
	printf("\n%s님의 평균은 %d점입니다.", name, avg);

	if (avg >= 90) {
		printf("\n\n당신의 학점은 A입니다. 축하드립니다!");
	}
	else if (avg >= 80) {
		printf("\n\n당신의 학점은 B입니다.");
	}
	else if (avg >= 70) {
		printf("\n\n당신의 학점은 C입니다.");
	}
	else if (avg >= 60) {
		printf("\n\n당신의 학점은 D입니다. 아쉽네요 -_-;");
	}
	else
		printf("\n\n당신의 학점은 E입니다. 어쩌다 이런일이....");
}

/*

 _2019.05.11

개선점 : AND연산자를 OR연상자로 바꾸면서 "다시 입력해주세요" 출력을 가능하게함

문제점 : 점수 입력시 숫자가 아닌 문자를 넣으면 해당 점수입력칸이 무한반복되는 오류발생

*/

#include <stdio.h>
int main()
{
	int a; //변수 a 선언
	a = 5; // a 는 5이다.
	
	printf("run\n"); //잘 동작중임을 의미하는 메세지

	if (a == 5) { //만약 a가 5라면
		printf("before Goto\n"); //goto를 실행하기 이전 확인 메시지 
		goto EXIT; // goto 사용
		printf("after Goto\n"); //goto를 이미 사용한 후의 메세지(출력은 안되겠지?)
	}
	printf("before goto\n");//goto로 이동하기 전 확인 메세지(출력은 안되겠지?)
EXIT:
	printf("after goto\n"); //goto로 이동한 후 확인 메세지
	printf("EXIT Success!");//종료 확인!
}
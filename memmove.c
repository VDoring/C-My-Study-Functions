/*

memmove can be very useful...... 에서, 문자열 시작 주소 부터 15 번째 부분 부터
11 바이트, 즉 "very useful" 을 문자열 시작 주소 부터 20 번째 부분, 즉 "use~"
부분에 복사해 넣는다. 다시말해, 위 문자열은 "memmove can be very very useful."
이 된다. 이 예제는 http://www.cplusplus.com/reference/clibrary/cstring/memmove/
에서 가져왔습니다.

 */
#include <stdio.h>
#include <string.h>

int main() {
	char str[] = "memmove can be very useful.......";
	memmove(str + 20, str + 15, 11); //str의 15번? 부분부터 11바이트(very useful 부분)을 str의 20번째 부분(useful 바로 앞부분)에 복사해 넣음.
									// 출력 : memmove can be very very useful.
	puts(str);
	return 0;
}

//https://modoocode.com/78
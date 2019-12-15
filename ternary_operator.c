/* [삼항연산자] ? :
x ? a : b
조건부 연산자. 조건식이 참이면 : 앞의 값을 반환. 거짓이면 : 뒤의 값을 반환
*/
#include <stdio.h>
int main() {
	int num1 = 5;
	int num2;

	num2 = num1 ? 100 : 200; //num1이 참일시 num2에 100 할당
							 //num1이 거짓일시 num2에 200 할당
							//num1의 값이 5이므로 참. num2에는 100이 할당
	printf("%d\n", num2); //100 출력

	return 0;
}

// https://dojang.io/mod/page/view.php?id=145
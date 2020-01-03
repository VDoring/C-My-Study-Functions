#include <stdio.h>
int main() {
	float num1 = 11.0f;
	float num2 = 5.0f;

	int num3 = num1 / num2; //실수에서 실수를 나눠(11.0 / 5.0) 2.2가 나왔지만
							//정수 자료형에는 2만 저장, 0.2는 버려진다.

	printf("%d\n", num3); // 2출력

	return 0;
}

// https://dojang.io/mod/page/view.php?id=113
#include <stdio.h>
int main() {
	char num1 = 28;
	int num2 = 1000000002;

	char num3 = num1 + num2; //(char보다 큰 숫자는 저장할 수 없음)
							//28+2만 남고 앞자리수는 버려진다. 

	printf("%d\n", num3); // 30출력

	return 0;
}

// https://dojang.io/mod/page/view.php?id=113
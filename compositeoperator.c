#include <stdio.h>

int main() {
	int a = 5;

	a *= 5;
	printf("%d\n", a);
}

/*
오늘의 가장 큰 깨달음.
기초적인 내용이지만 많은 고민을 했던 부분.

a += 5;
printf("%d\n", a);

a -= 5
printf("%d\n", a);

a *= 5
printf("%d\n", a);

a /= 5
printf("%d\n", a);

a %= 5
printf("%d\n", a);


에서 나는 하나식 진행될때마다 a의 값이 5로 초기화되는 줄 알았다.

*/
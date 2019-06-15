#include <stdio.h>
int main() {
	int num[5] = { 100,200,300,400,500 };

	for (int i = 0; i < sizeof(num) / sizeof(int); i++) {
		printf("%d\n", num[i]); //num[i]는 num[1]부터 num[5]까지 출력하게 되어있다.
	}
	return 0;
}
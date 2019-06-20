#include <stdio.h>
int main() {
	int num[5] = { 100,200,300,400,500 };

	printf("%d\n", sizeof(num)); //4바이트가 5개있음
	printf("%d\n", sizeof(num) / sizeof(int)); //int형은 4바이트이므로.
												//20 / 4 = 5
	return 0;
}
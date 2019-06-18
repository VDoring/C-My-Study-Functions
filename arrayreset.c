#include <stdio.h>
int main() {
	int num[10] = { 0, };

	printf("%d\n", num[0]); //모두
	printf("%d\n", num[5]); //초기화 되었음을
	printf("%d\n", num[9]); //확인!

	return 0;
}
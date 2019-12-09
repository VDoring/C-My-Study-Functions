#include <stdio.h>
int main() {
	int num;
	int *ptr_num;

	printf("?? ??");
	scanf("%d", &num);
	ptr_num = &num;

	printf("num: %d\n", num);
	printf("*ptr_num: %d\n\n", *ptr_num);
	printf("&num: %d\n", &num);
	printf("ptr_num: %d\n", ptr_num);

	return 0;
}

// https://prosto.tistory.com/253
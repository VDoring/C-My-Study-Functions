#include <stdio.h>
int main() {
	int a = 10;
	int b = 20;
	int *pa = &a;
	int *pb = &b;

	printf("%d", (*pa) + (*pb)); // 10 + 20 = 30
	printf("%d", pa + pb); // 포인터끼리의 덧셈(주소+주소). 즉 컴파일 에러
}
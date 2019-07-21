#define _CRT_CECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Person { //구조체 정의
	char name[20]; //구조체 멤버 1
	int age; //구조체 멤버 2
	char address[100]; //구조체 멤버 3
};

int main() {
	struct Person p1; //구조체 변수 선언

	strcpy(p1.name, "홍길동");
	p1.age = 30;
	strcpy(p1.address, "서울시 서울구 서울동");

	printf("%s\n", p1.name);
	printf("%d\n", p1.age);
	printf("%s\n", p1.address);
	return 0;
}

// https://dojang.io/mod/page/view.php?id=408
// strcpy를 이용한 구조체 사용 방법
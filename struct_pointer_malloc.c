#define _CRT_SECURE_NO_WARNINGS    // strcpy 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <string.h>    // strcpy 함수가 선언된 헤더 파일
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일

struct Person {
	char name[20];
	int age;
	char address[100];
};

int main() {
	struct Person *p1 = malloc(sizeof(struct Person));

	strcpy(p1->name, "VDO");
	p1->age = 30;
	strcpy(p1->address, "서울");

	printf("Name: %s\n", p1->name);		  // VDO
	printf("나이: %d\n", p1->age);        // 30
	printf("주소: %s\n", p1->address);    // 서울
	
	free(p1);    // 동적 메모리 해제

	return 0;
}
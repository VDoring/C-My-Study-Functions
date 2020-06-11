// https://sacstory.tistory.com/entry/%EB%AC%B8%EC%9E%90%EC%97%B4-%EB%B3%B5%EC%82%AC-%EB%8C%80%EC%B2%B4-strncpy
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	char s1[] = "Hello";
	char s2[] = "FantasyWorld";

	strncpy(s1, s2, strlen(s1));
	printf("%s", s1);

	return 0;
}
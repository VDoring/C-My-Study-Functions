#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main() {
	char arr[100] = "https://www.youtube.com/watch?v=2cWu_ow99Wk  Geoxor - Moonlight";

	char *ptr = strtok(arr, " "); // " "로 문자열을 자른다. 이후 포인터 반환

	printf("%s\n", ptr); //자른 문자열 출력

	return 0;
}
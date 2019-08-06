#include <stdio.h>
#include <string.h>

int main() {
	char str[] = "hello memset world!";
	memset(str, '-', 5); //str부터 5까지 - 를 출력
	puts(str); //for문 없이 puts를 사용해 바로 출력할 수 있음(memset_basic.c처럼 출력안하고)
	return 0;
}

// https://modoocode.com/104
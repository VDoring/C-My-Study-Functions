#include <stdio.h>
#include <string.h>

int main() {
	char str[] = "hello memset world!";
	memset(str, '-', 5); //str���� 5���� - �� ���
	puts(str); //for�� ���� puts�� ����� �ٷ� ����� �� ����(memset_basic.có�� ��¾��ϰ�)
	return 0;
}

// https://modoocode.com/104
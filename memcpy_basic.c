#include <stdio.h>
#include <string.h>
int main() {
	char str1[] = "Hello?";
	char str2[40];
	char str3[40];

	memcpy(str2, str1, strlen(str1) + 1); // str2에 str1의 배열크기에 1을 더한 크기를 주고 Hello?를 저장한다.(str1에 저장된 문자열)
	memcpy(str3, "Copy success", 13); // str3에 Copy success문자열을 13의 크기를 주고 저장한다. 
	printf("str1 : %s\nstr2 : %s\nstr3 : %s\n", str1, str2, str3);

	return 0;

}

// https://modoocode.com/80
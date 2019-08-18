#include <stdio.h>
#include <string.h>

int main() {
	char str1[] = "To be or not to be";
	char str2[6];

	strncpy(str2, str1, 5);
	str2[5] = '\0';
	puts(str2);

	return 0;
}

/*

str2에 str1의 첫 5문자. 즉 "To be"를 복사해 넣음.
이때, str2에는 자동으로 끝에 NULL문자가 붙는 것이 아니므로 인위적으로 넣어줘야 한다.

*/

// https://modoocode.com/80
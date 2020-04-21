// https://modoocode.com/95
/*
strpbrk 로 일치하는 문자를 찾았다면 포인터의 값을 1 증가시켜서 그 다음 부분 부터
계속 검색을 수행한다. 즉 str 에 포함된 모든 vowel 들의 위치를 구하게 된다. 이
예제는 http://www.cplusplus.com/reference/clibrary/cstring/strpbrk/ 에서
가져왔습니다.
 */
#include <stdio.h>
#include <string.h>

int main() {
	char str[] = "This is a sample string";
	char key[] = "aeiou";
	char* pch;
	printf("Vowels in '%s': ", str);
	pch = strpbrk(str, key);

	while (pch != NULL) {
		printf("%c ", *pch);
		pch = strpbrk(pch + 1, key);
	}
	printf("\n");

	return 0;
}
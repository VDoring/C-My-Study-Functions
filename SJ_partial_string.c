/* 부분문자열 */

#include <stdio.h>
#include <string.h>

int main() {
	int l;
	char inputArr[100];

	scanf("%s", inputArr);
	l = strlen(inputArr);

	for (int i = 0; i < 1; i++) {
		for (int j = 0; j <= i; j++) {
			printf("%c", inputArr[j]); // %c는 문자 하나만 출력
		}
		printf("\n");
	}
	return 0;
}

/* https://github.com/sjoon627/basic_200/commit/85829dea4e5fa268d6a71b9aa8c693cf802d7397 */
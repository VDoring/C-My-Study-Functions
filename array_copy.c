#include <stdio.h>



char *mystrcpy(char *dest, const char *src);

int main(void)

{

	char source[100] = "Hello World";

	char copy[100];



	printf("원본 문자열:%s\n", source);

	mystrcpy(copy, source);

	printf("복사 결과 문자열: %s\n", copy);

	return 0;

}

char *mystrcpy(char *dest, const char *source)
{
	char *origin;
	origin = dest;
	for (origin = dest; *dest = *source; dest++, source++);//복사한 문자가 참이면 반복
	return origin;
}
// strstr 함수를 구현한 StrStr 함수 소스
// StrStr 출처: http://www.jbox.dk/sanos/source/lib/string.c.html
//http://blog.daum.net/_blog/BlogTypeView.do?blogid=02XGV&articleno=13720440&categoryId=558097&regdt=20180601143303

#include <stdio.h>
#include <string.h>

char *StrStr(const char *str1, const char *str2)
{
	char *cp = (char *)str1;
	char *s1, *s2;

	if (!*str2) // NULL 종료면 끝냄
		return (char *)str1;

	while (*cp) { // str1에 남은 문자가 존재할 때까지 반복
		s1 = cp;
		s2 = (char *)str2;
		// 양쪽에 같은 문자가 존재하면 다음 문자를 비교
		while (*s1 && *s2 && !(*s1 - *s2))
			s1++, s2++;
		// s2 문자가 끝났으면
		if (!*s2)
			return cp;
		cp++;
	}
	return NULL;
}


// 특정 문자열을 찾아서 다른 문자열로 바꾸는 예
int main(int argc, char *argv[])
{
	char str[] = "This is a simple string";
	char * pos;

	// StrStr() 대신에 C 표준 함수 strstr() 사용해도 같은 결과 나옴
	pos = StrStr(str, "simple");  // simple이 존재하는 위치를 찾음
	if (pos) {
		strncpy(pos, "sample", 6);  // sample로 변경함
		puts(str);
	}
	else
		puts("None!");

	return 0;
}
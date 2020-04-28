// strstr �Լ��� ������ StrStr �Լ� �ҽ�
// StrStr ��ó: http://www.jbox.dk/sanos/source/lib/string.c.html
//http://blog.daum.net/_blog/BlogTypeView.do?blogid=02XGV&articleno=13720440&categoryId=558097&regdt=20180601143303

#include <stdio.h>
#include <string.h>

char *StrStr(const char *str1, const char *str2)
{
	char *cp = (char *)str1;
	char *s1, *s2;

	if (!*str2) // NULL ����� ����
		return (char *)str1;

	while (*cp) { // str1�� ���� ���ڰ� ������ ������ �ݺ�
		s1 = cp;
		s2 = (char *)str2;
		// ���ʿ� ���� ���ڰ� �����ϸ� ���� ���ڸ� ��
		while (*s1 && *s2 && !(*s1 - *s2))
			s1++, s2++;
		// s2 ���ڰ� ��������
		if (!*s2)
			return cp;
		cp++;
	}
	return NULL;
}


// Ư�� ���ڿ��� ã�Ƽ� �ٸ� ���ڿ��� �ٲٴ� ��
int main(int argc, char *argv[])
{
	char str[] = "This is a simple string";
	char * pos;

	// StrStr() ��ſ� C ǥ�� �Լ� strstr() ����ص� ���� ��� ����
	pos = StrStr(str, "simple");  // simple�� �����ϴ� ��ġ�� ã��
	if (pos) {
		strncpy(pos, "sample", 6);  // sample�� ������
		puts(str);
	}
	else
		puts("None!");

	return 0;
}
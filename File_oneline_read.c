#include < stdio.h >

void main()
{

	FILE *fp;

	char s[81];

	fp = fopen("input.txt", "r");  // 파일 열기


	fgets(s, 80, fp);  // 최대 80칸짜리 한줄 읽기

	puts(s);  // 한줄 출력


	fgets(s, 80, fp);

	puts(s);

	/*
	fgets(s, 80, fp);

	puts(s);
	*/
	//이런식으로 연속으로 이걸 사용하면 한줄씩 읽는게 가능해진다.



	fclose(fp);

}

// https://sunshout.tistory.com/46
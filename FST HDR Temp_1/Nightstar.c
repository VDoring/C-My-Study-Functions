/* ��Ƹ� ����ȭ�鿡 ���� ������! */


/*
#include <stdio.h>
int main()
{
	int a;
	int b;

	for (a = 0; a <= 5; a++) { // ĭ�� �������ִ� ģ��!
		for (b = 0; b <= a; b++) { // ��!
			printf("*");
		}
	printf("\n");
	}
}
*/

/*
#include <stdio.h>
int main()
{
	int c, d;

	for (c = 0; c <= 7; c++) {
		for (d = 7; d >= c; d--) {
			printf("*");
		}
		printf("\n");
	}
}
*/

/*
#include <stdio.h>
int main()
{
	int a, b, c;

	for (a = 1; a <= 7; a++) {
		for (b = 7; b >= a; b--) {
			printf("^");
		}
		for (c = 0; c <= b; c++) {
			printf("*");
		}
		printf("\n");
	}
}
*/

#include <stdio.h>
int main()
{
	int i;
	int k;
	int j;
	int h = 7;

	int a;
	int b;
	int c;
	int x = 7;

	for (i = 1; i <= h; i++) {
		for (k = 1; k <= (h - i); k++) printf("^");
		for (j = 1; j <= i; j++) printf("*");
		printf("\n");
	}
	for (a = 7; a >= x; a--) { //���⼱ �۵��ȵ�
		for (b = 7; b >= (b + a); b--) printf("&");
		for (c = 7; c >= a; c--) printf("=");
		printf("\n");
	}
}

// https://m.post.naver.com/viewer/postView.nhn?volumeNo=8390558&memberNo=1991839
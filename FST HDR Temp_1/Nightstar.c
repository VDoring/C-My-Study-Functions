/* 까아만 도스화면에 별이 보여요! */


/*
#include <stdio.h>
int main()
{
	int a;
	int b;

	for (a = 0; a <= 5; a++) { // 칸을 설정해주는 친구!
		for (b = 0; b <= a; b++) { // 별!
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
	for (a = 7; a >= x; a--) { //여기선 작동안됨
		for (b = 7; b >= (b + a); b--) printf("&");
		for (c = 7; c >= a; c--) printf("=");
		printf("\n");
	}
}

// https://m.post.naver.com/viewer/postView.nhn?volumeNo=8390558&memberNo=1991839
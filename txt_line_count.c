#include<stdio.h>

int main() {
	FILE *fp;
	fp = fopen("linecount.txt", "r");
	char tmp;
	int cnt = 1;
	if (fp == NULL) {
		exit(0);
	}
	while (fscanf(fp, "%c", &tmp) != EOF) {
		printf("%c", tmp);
		if (tmp == '\n')
			cnt++;
	}
	printf("\n\n라인의 개수=%d\n", cnt);
	return 0;
}

// https://security-nanglam.tistory.com/m/166?category=814722
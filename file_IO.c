#include <stdio.h>

int main() {
	FILE *fp //파일포인터.
			 //파일 입출력에 꼭 필요하다
	
	fp = fopen("exampleFile.txt", "wt"); //fp에 exampleFile.txt라는 파일을 wt모드로 염
	
	if(fp == NULL) { //만약 파일이 정상적으로 열리지 않았다면,
		printf("실패했습니다. 종료합니다.");
		return -1; //프로그램 종료
	}
	fprintf(fp, "This is Example"); //첫번째엔 파일포인터. 두번째엔 입력할 문자열을 넣어준다.
//	fprintf(FILE* stream, const char* format, ...);
	
	fclose(fp); //작업을 다 했으니, 파일을 닫기
	
	printf("작업이 완료됐습니다!");
	
	return 0;
}

// https://prosto.tistory.com/81
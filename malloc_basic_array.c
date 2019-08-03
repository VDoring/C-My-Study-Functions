#include <stdio.h>
#include <stdlib.h> //malloc()함수 사용 위해서

int main() {
	int *pArr = NULL;

	pArr = (int*)malloc(sizeof(int) * 3); //12바이트(sizeof(int)*3)의 메모리를 동적할당
											// 반환값은 시작주소인데, void* 형으로 반환되니까 int*형으로 형변환

	pArr[0] = 10;
	pArr[1] = 20;
	pArr[2] = 30;

	for (int i = 0; i < 3; i++) {
		printf("%d ", *(pArr + i));
	}

	free(pArr);

	printf("\n\n");
	return 0;
}

// https://onsil-thegreenhouse.github.io/programming/c/2018/08/05/c_tutorial_11/
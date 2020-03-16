#include <stdio.h>
#include <stdlib.h>

int main() {
	int **m = malloc(sizeof(int *) * 3); //이중 포인터에 (int 포인터 크기 * 세로 크기(3))만큼
										// 동적 메모리 할당. 배열의 세로

	for (int i = 0; i < 3; i++) { //세로 크기(3)만큼 반복
		m[i] = malloc(sizeof(int) * 4); //(int 크기 * 가로 크기)만큼 동적 메모리 할당
										//배열의 가로
	}


	//값 할당
	m[0][0] = 1;
	m[2][0] = 5;
	m[2][3] = 2;

	//값 출력
	printf("%d\n", m[0][0]);
	printf("%d\n", m[2][0]);
	printf("%d\n", m[2][3]);


	for (int i = 0; i < 3; i++) { //세로 크기만큼 반복
		free(m[i]); //2차원 배열의 가로 공간 메모리 해제
	}

	free(m); //2차원 배열의 세로 공간 메모리 해제

	return 0;
}

// https://dojang.io/mod/page/view.php?id=319
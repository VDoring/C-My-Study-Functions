#include <stdio.h>
#include <stdlib.h>

int main() {
	int arr_1[10]; //배열 선언
	int *arr_2; //포인터 변수 선언

	for (int i = 0; i < 10; i++) {
		arr_1[i] = i + 1; //배열에 1~10까지 설정
	}

	arr_2 = (int*)malloc(sizeof(int) * 5); //배열의 크기만큼 할당하기 위해 5를 곱함(밑의 계산을 위해서)
	//arr_2 = 20바이트

	for (int i = 0; i < 5; i++) {
		arr_2[i] = arr_1[i];
		printf("%d ", arr_2[i]); //출력 : 1 2 3 4 5
	}

	printf("\n");

	realloc(arr_2, sizeof(int) * 10); //arr_2의 메모리를 40바이트로 재 할당
	//arr_2 = 40바이트

	for (int i = 0; i < 10; i++) {
		arr_2[i] = arr_1[i];
		printf("%d ", arr_2[i]); //출력 : 1 2 3 4 5 6 7 8 9 10
	}

	free(arr_2); //메모리 헤제

	return 0;
}

/* realloc 함수 */
// 이미 할당된 공간의 크기를 바꿀 때 relloc 함수를 사용함

// https://dsnight.tistory.com/51
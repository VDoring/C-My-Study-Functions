#include <stdio.h>
#include <stdlib.h>

int main() {
	int arr_1[5]; //배열 선언
	int *arr_2; //포인터 변수 선언
	int i;

	for (int i = 0; i < 5; i++) {
		arr_1[i] = i + 1; //배열에 값 대입
	}

	arr_2 = (int*)calloc(5, sizeof(int)); //sizeof(int)의 크기의 변수를 5개 저장할 수 있는 공간할당
//	arr_2 = (int*)malloc(sizeof(int)*5); // 배열의 크기만큼 할당하기 위해 5를 곱함

	for (int i = 0; i < 5; i++) {
		arr_2[i] = arr_1[i];
		printf("%d ", arr_2[i]);
	}

	free(arr_2);

	return 0;
}

/* malloc함수와 calloc함수의 차이점 */

// malloc으로 할당한 공간의 값들은 바꾸지 않음.
// 하지만 calloc으로 할당한 공간의 값은 모두 0으로 바꾼다.
// 즉, 배열을 할당하고 모두 0으로 초기화할 필요가 있을경우에 calloc을 사용하면 편함!


// https://dsnight.tistory.com/51
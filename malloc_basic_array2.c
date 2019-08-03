#include <stdio.h>
#include <stdlib.h>

int main() {
	int arr_1[5]; //arr_1은 미리 배열이 5개 설정되어있음
	int *arr_2; //arr_2는 malloc함수를 사용할 예정(동적할당)

	for (int i = 0; i < 5; i++) { //arr_1의 5개의 배열을 1, 2, 3, 4, 5로 설정한다
		arr_1[i] = i + 1;
	}

	arr_2 = (int*)malloc(sizeof(int) * 5); //arr_1은 5개의 배열이 설정되어있으므로
											//arr_2도 5개의 배열로 동적할당해 설정함
											// *5 가 있는 이유도 배열이 5개이기 때문

	for (int i = 0; i < 5; i++) { //이제 for문을 이용하여,
		arr_2[i] = arr_1[i]; //arr_1의 값을 arr_2에게 복사하고
		printf("%d ", arr_2[i]);//출력한다
	}

	free(arr_2); //계산이 끝났으면 메모리를 해제함

	return 0;
}

// https://dsnight.tistory.com/51
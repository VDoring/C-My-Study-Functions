#include <stdio.h>

void Arrayprint(int *arr, int count) {
	for (int i = 0; i < count; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main() {
	int numArr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	Arrayprint(numArr, sizeof(numArr) / sizeof(int));

	return 0;
}
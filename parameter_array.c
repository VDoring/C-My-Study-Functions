#include <stdio.h>

void Arrayprint(int arr[], int count) { //�迭�� �����Ϳ� ����� ������ ����
	for (int i = 0; i < count; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main() {
	int numArr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	Arrayprint(numArr, sizeof(numArr) / sizeof(int)); //�迭�� ����� ������ ����

	return 0;
}
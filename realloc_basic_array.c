#include <stdio.h>
#include <stdlib.h>

int main() {
	int arr_1[10]; //�迭 ����
	int *arr_2; //������ ���� ����

	for (int i = 0; i < 10; i++) {
		arr_1[i] = i + 1; //�迭�� 1~10���� ����
	}

	arr_2 = (int*)malloc(sizeof(int) * 5); //�迭�� ũ�⸸ŭ �Ҵ��ϱ� ���� 5�� ����(���� ����� ���ؼ�)
	//arr_2 = 20����Ʈ

	for (int i = 0; i < 5; i++) {
		arr_2[i] = arr_1[i];
		printf("%d ", arr_2[i]); //��� : 1 2 3 4 5
	}

	printf("\n");

	realloc(arr_2, sizeof(int) * 10); //arr_2�� �޸𸮸� 40����Ʈ�� �� �Ҵ�
	//arr_2 = 40����Ʈ

	for (int i = 0; i < 10; i++) {
		arr_2[i] = arr_1[i];
		printf("%d ", arr_2[i]); //��� : 1 2 3 4 5 6 7 8 9 10
	}

	free(arr_2); //�޸� ����

	return 0;
}

/* realloc �Լ� */
// �̹� �Ҵ�� ������ ũ�⸦ �ٲ� �� relloc �Լ��� �����

// https://dsnight.tistory.com/51
#include <stdio.h>
#include <stdlib.h>

int main() {
	int arr_1[5]; //arr_1�� �̸� �迭�� 5�� �����Ǿ�����
	int *arr_2; //arr_2�� malloc�Լ��� ����� ����(�����Ҵ�)

	for (int i = 0; i < 5; i++) { //arr_1�� 5���� �迭�� 1, 2, 3, 4, 5�� �����Ѵ�
		arr_1[i] = i + 1;
	}

	arr_2 = (int*)malloc(sizeof(int) * 5); //arr_1�� 5���� �迭�� �����Ǿ������Ƿ�
											//arr_2�� 5���� �迭�� �����Ҵ��� ������
											// *5 �� �ִ� ������ �迭�� 5���̱� ����

	for (int i = 0; i < 5; i++) { //���� for���� �̿��Ͽ�,
		arr_2[i] = arr_1[i]; //arr_1�� ���� arr_2���� �����ϰ�
		printf("%d ", arr_2[i]);//����Ѵ�
	}

	free(arr_2); //����� �������� �޸𸮸� ������

	return 0;
}

// https://dsnight.tistory.com/51
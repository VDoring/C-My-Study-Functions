#include <stdio.h>
#include <stdlib.h> //malloc()�Լ� ��� ���ؼ�

int main() {
	int *pArr = NULL;

	pArr = (int*)malloc(sizeof(int) * 3); //12����Ʈ(sizeof(int)*3)�� �޸𸮸� �����Ҵ�
											// ��ȯ���� �����ּ��ε�, void* ������ ��ȯ�Ǵϱ� int*������ ����ȯ

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
#include <stdio.h>
int main() {
	int num = 5;
	int *ptrNum = &num;

	printf("num�� %d �Դϴ�. \n", num); //�޸� �� �Ҵ�� �ּҰ� ���
	printf("*ptrNum�� %d �Դϴ� \n", *ptrNum); //������ �����Ͱ� ����Ű�� ������ ���� �����Ҷ��� �տ� *(�����͸���ũ)�� ���δ�

	printf("num�� �ּڰ��� %p �Դϴ� \n", &num);
	printf("ptrNum�� �ּڰ��� %p �Դϴ�. \n", ptrNum);

	return 0;
}


// https://eskeptor.tistory.com/119?category=928922
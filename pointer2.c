#include <stdio.h>
int main() {
	int num = 5;
	int *ptrNum = &num;

	printf("num�� %d �Դϴ�. \n", num); //�޸� �� �Ҵ�� �ּҰ� ���
	printf("*ptrNum�� %d �Դϴ� \n", *ptrNum); //������ �����Ͱ� ����Ű�� ������ ���� �����Ҷ��� �տ� *(�����͸���ũ)�� ���δ�
	printf("num�� �ּڰ��� %p �Դϴ� \n", &num);
	printf("ptrNum�� �ּڰ��� %p �Դϴ�. \n\n", ptrNum);

	*ptrNum = 8; //���� 5���� 8�� ����

	printf("num�� %d �Դϴ�. \n", num);
	printf("*ptrNum�� %d �Դϴ� \n", *ptrNum);
	printf("num�� �ּڰ��� %p �Դϴ� \n", &num);
	printf("ptrNum�� �ּڰ��� %p �Դϴ�. \n", ptrNum);


	return 0;
}
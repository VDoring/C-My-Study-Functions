#include <stdio.h>
int main() {
	//�Ϲ� ����
	int num1 = 3;
	int num2 = 6;

	//������ ���� ���� �� �Ϲݺ����� �ּڰ�(&)�� ����
	int *num1_ptr = &num1;
	int *num2_ptr = &num2;

	// ������ ���
	printf("%d, %d\n", num1, *num1_ptr);
	printf("%d, %d\n", num2, *num2_ptr);

	return 0;
}


/*
int *p; //int�� �����ͷ� p��� �̸��� ���� ����
p = &num; //int�� �������� ���� p�� ���� num������ �ּҰ� ����

printf("%d", *p); //*p�� 'p�� ����Ű�� �ּҿ� �ִ� ��'�� �ǹ�
printf("%d", p); //�׳� p�� 'p�� ����Ű�� �ִ� �ּ�'�� �ǹ�
*/

#include <stdio.h>
int main() {
	int num = 5;
	int *ptr;
	ptr = &num; //ptr�� num�� �ּڰ� ����

	printf(" num: %d\n", num);  //num�� �ּҿ� �ִ� �� ���
	printf("*ptr: %d\n", *ptr); //ptr�� ����Ű�� �ּҿ� �ִ� �� ���
	printf(" ptr: %d\n", ptr);  //ptr�� ����Ű�� �ּ� ���
	printf("&num: %d\n", &num); //num�� �ּ� ���
}
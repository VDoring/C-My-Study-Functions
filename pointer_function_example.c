// �Ϲ� �Լ� �����
#include <stdio.h>

int Plus(int n) {
	return n + 1;
}

int main() {
	int num = 3;
	printf("%d\n", num); //3 ���

	num = 5;
	printf("%d\n", num); //5 ���

	num = Plus(num);
	printf("%d\n", num); //6 ���

	return 0;
}




// �Լ����� ������ main()�� ����ó�� Ȱ���ϱ� �õ�
#include <stdio.h>

int Plus(int n) {
	n += 1;
}

int main() {
	int num = 3;
	printf("%d\n", num); //3 ���

	num = 5;
	printf("%d\n", num); //5 ���

	Plus(num);
	printf("%d\n", num); //5 ���
						// �� �ȵȴٴ°� �˼�����.

	return 0;
}



// �׷��� ������ ����!
#include <stdio.h>

int Plus(int *n) {
	*n += 1;
}

int main() {
	int num = 3;
	printf("%d\n", num); //3 ���

	num = 5;
	printf("%d\n", num); //5 ���

	Plus(&num);
	printf("%d\n", num); //6 ���

	return 0;
}
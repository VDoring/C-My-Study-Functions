#include <stdio.h>
#include <stdlib.h>

int main() {
	int *pi;

	pi = (int*)malloc(sizeof(int)); //4����Ʈ(int)�� �����޸�? �� �Ҵ���
	*pi = 3;

	printf("%d\n", *pi);

	free(pi); //�����Ҵ� ���� �������� free()�Լ��� ����ؼ� �޸𸮸� �����ؾ� �Ѵ�

	return 0;
}

// https://www.jynote.net/51
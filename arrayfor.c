#include <stdio.h>
int main()
{
	int number[4];
	
	for (int i = 0; i < 4; i++) {
		printf("number[%d]�� �Է��Ͻʽÿ� : ", i);
		scanf("%d", &number[i]);
	}

	printf("\n");

	for (int i = 0; i < 4; i++)
		printf("number[%d]�� %d �Դϴ�\n", i, number[i]);


	return 0;
}
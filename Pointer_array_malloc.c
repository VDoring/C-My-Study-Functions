// https://blockdmask.tistory.com/56
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	//int user_num = 0;
	char *arr[3] = { 0, };
	char temp[30] = { 0, };
	int len, i;

	//printf("��� �Է��Ұ��� �����ּ���. (����)\n= ");
	//scanf("%d", &user_num);

	for (i = 0; i < 3; i++) {
		printf("[%d] : ", i); scanf("%s", temp);
		len = strlen(temp) + 1;
		printf("[%d] : temp\t�ּ�:%p\n", i, &temp);

		arr[i] = (char*)malloc(sizeof(char) * len);
		printf("[%d] : arr[%d]\t�ּ� : %p\n\n", i, i, &arr[i]);

		strcpy(arr[i], temp);
	}
	printf("\n");
	for (i = 0; i < 3; i++)
		printf("arr[%d] = %s\t�ּ� : %p\n", i, arr[i], &arr[i]);

	for (i = 0; i < 3; i++) {
		free(arr[i]);
	}
}
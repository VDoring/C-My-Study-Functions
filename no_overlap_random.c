// https://m.blog.naver.com/PostView.nhn?blogId=tipsware&logNo=221248077710&proxyReferer=https%3A%2F%2Fwww.google.com%2F


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUM 20	//���� ����
#define MAX_MIX_COUNT MAX_NUM+30 //���� �ܼ�

int main() {
	//const int max_num = 20; //���� ����
	//const int max_mix_count = max_num + 30; //���� �ܼ�

	int data[MAX_NUM];
	int i, temp, x, y;


	srand((unsigned int)time(NULL));

	for (i = 0; i < MAX_NUM; i++) {
		data[i] = i + 1;
	}

	for (i = 0; i < MAX_MIX_COUNT; i++) {
		x = rand() % MAX_NUM;
		y = rand() % MAX_NUM;

		if (x != y) {
			temp = data[x];
			data[x] = data[y];
			data[y] = temp;
		}
	}

	for (i = 0; i < MAX_NUM; i++) {
		printf("%d, ", data[i]);
	}
	printf("\n");
	return 0;

}

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define _CRT_SECURE_NO_WARNINGS

#define USER_INPUT 11
#define MAX_MIX_COUNT 30

int main() {
	//int user_input;
	//scanf("%d", &user_input); //���� �������� �Է�

	int max_mix_count = 30; //������ �ܼ�

	int arr[USER_INPUT] = { 0, }; //���� ������ �迭

	int i;
	for (i = 0; i < USER_INPUT; i++) { //0���� ������ �Է��� ������ ����
		arr[i] = i;
	}

	int x, y, temp;
	for (i = 0; i < MAX_MIX_COUNT; i++) {
		x = rand() % USER_INPUT;
		y = rand() % USER_INPUT;

		if (x != y) {
			temp = arr[x];
			arr[x] = arr[y];
			arr[y] = temp;
		}
	}

	for (i = 0; i < USER_INPUT; i++) {
		printf("%d, ", arr[i]);
	}
	return 0;
}*/
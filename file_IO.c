#include <stdio.h>

int main() {
	FILE *fp //����������.
			 //���� ����¿� �� �ʿ��ϴ�
	
	fp = fopen("exampleFile.txt", "wt"); //fp�� exampleFile.txt��� ������ wt���� ��
	
	if(fp == NULL) { //���� ������ ���������� ������ �ʾҴٸ�,
		printf("�����߽��ϴ�. �����մϴ�.");
		return -1; //���α׷� ����
	}
	fprintf(fp, "This is Example"); //ù��°�� ����������. �ι�°�� �Է��� ���ڿ��� �־��ش�.
//	fprintf(FILE* stream, const char* format, ...);
	
	fclose(fp); //�۾��� �� ������, ������ �ݱ�
	
	printf("�۾��� �Ϸ�ƽ��ϴ�!");
	
	return 0;
}

// https://prosto.tistory.com/81
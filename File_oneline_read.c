#include < stdio.h >

void main()
{

	FILE *fp;

	char s[81];

	fp = fopen("input.txt", "r");  // ���� ����


	fgets(s, 80, fp);  // �ִ� 80ĭ¥�� ���� �б�

	puts(s);  // ���� ���


	fgets(s, 80, fp);

	puts(s);

	/*
	fgets(s, 80, fp);

	puts(s);
	*/
	//�̷������� �������� �̰� ����ϸ� ���پ� �д°� ����������.



	fclose(fp);

}

// https://sunshout.tistory.com/46
#include <stdio.h>

int main() {
	//char text[5] = { "N", "O", "P", "W", "R" };
	char *text[5] = { "Power", "OverClock", "Watt", "Electric", "Reverse" }; //%s�� ���
	//char text[5] = { 'H', 'E', 'L', 'L', 'O'};  //%c�� ���

	for (int i = 0; i < 5; i++) {
		printf("%s\n", text[i]);
	}

	/*
	for (int i = 0; i < 5; i++) {
		printf("%c\n", text[i]);
	}*/

	printf("\n�̰��� �����͹迭�� ��!");
	printf("\n�׳� �迭�� �̷��� ������ �� �������. ������! ���ҳ� �� *��*�� ���� ���̴�!!\n\n");
	return 0;
}
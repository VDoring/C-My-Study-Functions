/* fscanf */

#include <stdio.h>

int main()

{

	char from_a_txt[30];

	FILE *file_pointer;
	file_pointer=fopen("example.txt", "r");

	fscanf(file_pointer, "%s" from_a_txt);
	printf("�о�� �κ� : %s \n", from_a_txt);

	fclose(file_pointer);

	return 0;

}

// https://desire-with-passion.tistory.com/169
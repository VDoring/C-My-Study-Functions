#include <stdio.h>
int main()
{
	int number[4];
	
	for (int i = 0; i < 4; i++) {
		printf("number[%d]를 입력하십시오 : ", i);
		scanf("%d", &number[i]);
	}

	printf("\n");

	for (int i = 0; i < 4; i++)
		printf("number[%d]는 %d 입니다\n", i, number[i]);


	return 0;
}
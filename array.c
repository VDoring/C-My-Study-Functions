#include <stdio.h>
int main()
{
	int numArr[5] = { 11, 22, 33, 44, 55 };

	printf("%d\n", numArr[0]); //배열의 첫번째(인덱스 0) 출력
	printf("%d\n", numArr[5]); // !-에러-! 0~4까지만 데이터가 저장됨
	printf("%d\n", numArr[3]);

	return 0;
}
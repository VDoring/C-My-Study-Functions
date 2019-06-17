#include <stdio.h>
int main() {
	int num = 5;
	int *ptrNum = &num;

	printf("num은 %d 입니다. \n", num); //메모리 상에 할당된 주소값 출력
	printf("*ptrNum은 %d 입니다 \n", *ptrNum); //선언한 포인터가 가리키는 변수의 값에 접근할때는 앞에 *(에프터리스크)를 붙인다

	printf("num의 주솟값은 %p 입니다 \n", &num);
	printf("ptrNum의 주솟값은 %p 입니다. \n", ptrNum);

	return 0;
}


// https://eskeptor.tistory.com/119?category=928922
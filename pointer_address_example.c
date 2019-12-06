#include <stdio.h>
int main() {
	//일반 변수
	int num1 = 3;
	int num2 = 6;

	//포인터 변수 선언 및 일반변수의 주솟값(&)을 저장
	int *num1_ptr = &num1;
	int *num2_ptr = &num2;

	// 포인터 출력
	printf("%d, %d\n", num1, *num1_ptr);
	printf("%d, %d\n", num2, *num2_ptr);

	return 0;
}


/*
int *p; //int형 포인터로 p라는 이름의 변수 선언
p = &num; //int형 포인터인 변수 p의 값에 num변수의 주소값 대입

printf("%d", *p); //*p는 'p가 가리키는 주소에 있는 값'을 의미
printf("%d", p); //그냥 p는 'p가 가리키고 있는 주소'를 의미
*/

#include <stdio.h>
int main() {
	int num = 5;
	int *ptr;
	ptr = &num; //ptr애 num의 주솟값 대입

	printf(" num: %d\n", num);  //num의 주소에 있는 값 출력
	printf("*ptr: %d\n", *ptr); //ptr이 가리키는 주소에 있는 값 출력
	printf(" ptr: %d\n", ptr);  //ptr이 가리키는 주소 출력
	printf("&num: %d\n", &num); //num의 주소 출력
}
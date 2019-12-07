// 일반 함수 사용방법
#include <stdio.h>

int Plus(int n) {
	return n + 1;
}

int main() {
	int num = 3;
	printf("%d\n", num); //3 출력

	num = 5;
	printf("%d\n", num); //5 출력

	num = Plus(num);
	printf("%d\n", num); //6 출력

	return 0;
}




// 함수안의 변수를 main()의 변수처럼 활용하기 시도
#include <stdio.h>

int Plus(int n) {
	n += 1;
}

int main() {
	int num = 3;
	printf("%d\n", num); //3 출력

	num = 5;
	printf("%d\n", num); //5 출력

	Plus(num);
	printf("%d\n", num); //5 출력
						// 즉 안된다는걸 알수있음.

	return 0;
}



// 그래서 포인터 등장!
#include <stdio.h>

int Plus(int *n) {
	*n += 1;
}

int main() {
	int num = 3;
	printf("%d\n", num); //3 출력

	num = 5;
	printf("%d\n", num); //5 출력

	Plus(&num);
	printf("%d\n", num); //6 출력

	return 0;
}
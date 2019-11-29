/* 재귀함수를 이용한 팩토리얼 */

/*
n! = n x (n-1) x (n-2) .... 2 x 1
3! = 3 x 2 x 1
5! = 5 x 4 x 3 x 2 x 1
*/

#include <stdio.h>

int Factorial(int n) {
	if (n == 0) return 1;
	else return n * Factorial(n - 1);
/*	n=5일때, 5 * 4 = 20
			20 * 3 = 60
			60 * 2 = 120
			120 * 1 = 120
	따라서 Factorial함수의 반환값은 5가 된다.
*/
}

int main() {
	printf("1! = %d \n", Factorial(1));
	printf("2! = %d \n", Factorial(2));
	printf("3! = %d \n", Factorial(3));
	printf("4! = %d \n", Factorial(4));
	printf("5! = %d \n", Factorial(5));

	return 0;
}
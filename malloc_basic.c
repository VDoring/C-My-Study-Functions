#include <stdio.h>
#include <stdlib.h>

int main() {
	int *pi;

	pi = (int*)malloc(sizeof(int)); //4바이트(int)의 동적메모리? 를 할당함
	*pi = 3;

	printf("%d\n", *pi);

	free(pi); //동적할당 해준 다음에는 free()함수를 사용해서 메모리를 해제해야 한다

	return 0;
}

// https://www.jynote.net/51
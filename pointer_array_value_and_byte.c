#include <stdio.h>
int main() {
	int arr[5] = { 1,3,5,7,9 };
	double arr2[5] = { 1.1,3.2,5.3,7.4,9.5 };
	int *arrPtr = arr;
	double *arrPtr2 = arr2;

	printf("%d %d\n\n", arrPtr, arrPtr2);

	(*arrPtr)++;
	*arrPtr2++;

	printf("%d %lf %d %d\n", *arrPtr, *arrPtr2, arrPtr, arrPtr2);

	return 0;
}

// https://edu.goorm.io/learn/lecture/201/%ED%95%9C-%EB%88%88%EC%97%90-%EB%81%9D%EB%82%B4%EB%8A%94-c%EC%96%B8%EC%96%B4-%EA%B8%B0%EC%B4%88/lesson/414927/%EC%A0%95%EB%A6%AC-%EB%AC%B8%EC%A0%9C
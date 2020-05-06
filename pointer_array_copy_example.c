//https://highdom.tistory.com/entry/%ED%8F%AC%EC%9D%B8%ED%84%B0%EB%A5%BC-%EC%9D%B4%EC%9A%A9%ED%95%9C-%EB%B0%B0%EC%97%B4%EB%B3%B5%EC%82%AC-copy-array-using-pointer

#include <stdio.h>
void copy_arr(double *, double *, int lo);
void copy_arr2(double *, double *, int lo);
void copy_ptr(double *, double *, double *);

int main(void)
{
	double source[5] = { 1.2, 2.2, 3.8, 8.2, 9.9 };
	double target1[5];
	double target2[5];
	double target3[5];
	double r = 5;
	int count;
	copy_arr(target1, source, 5);
	copy_arr2(target2, source, 5);
	copy_ptr(target3, source, source + 5);

	for (count = 0; count < r; count++)
		printf("target1[%d] = %.2lf\n", count, target1[count]);
	printf("\n");
	for (count = 0; count < r; count++)
		printf("target2[%d] = %.2lf\n", count, target2[count]);
	printf("\n");
	for (count = 0; count < r; count++)
		printf("target3[%d] = %.2lf\n", count, target3[count]);
}


void copy_arr(double * tar, double * sour, int lo)
{
	int count;
	for (count = 0; count < lo; count++)
		tar[count] = sour[count];

	return;
}

void copy_arr2(double * tar, double * sour, int lo)
{
	int count;
	for (count = 0; count < lo; count++)
	{
		*tar = *sour;
		tar++, sour++;
	}
}



void copy_ptr(double * tar, double * sour, double * til)
{

	for (; sour < til; sour++, tar++)
		*tar = *sour;
	return;
}
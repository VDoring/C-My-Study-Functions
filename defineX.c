#include <stdio.h>
#define XCal(x) x * x

int main()
{
	int a, num = 4;

	a = XCal(num);
	// a = num * num�� ����
	
	printf("%d\n", a);

	return 0;
}
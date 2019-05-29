#include <stdio.h>

void swap(int a, int b);
int main()
{
	int i = 2;
	int j = 3;

	printf("[Normal] before i:%d j:%d\n", i, j);
	swap(i, j);
	printf("[Normal] after i:%d j:%d\n", i, j);
	return 0;
}
void swap(int a, int b)
{
	int temp = 0;
	printf("[swap] before a:%d b:%d\n", a, b);
	temp = a;
	a = b;
	b = temp;
	printf("]swap] after a:%d b:%d\n", a, b);
}
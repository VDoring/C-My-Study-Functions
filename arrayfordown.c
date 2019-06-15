#include <stdio.h>
int main() {
	int num[5] = { 100,200,300,400,500 };

	for (int i = sizeof(num) / sizeof(int) - 1; i >= 0; i--) // -1 ²À ³Ö±â!
	{
		printf("%d\n", num[i]);
	}

}
#include <stdio.h>

void Numbers(int n) {
	for (int i = 1; i <= n; i++) {
		printf("%d ", i);
	}
	printf("\n\n");
}

int main() {
	
	Numbers(3);
	Numbers(5);
	Numbers(10);
	Numbers(100);

	return 0;
}
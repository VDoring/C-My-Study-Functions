#include <stdio.h>
#include <conio.h>
int main() {
	int star[5][5] = { {0,0,1,0,0},
						{0,0,1,0,0},
						{0,1,0,1,0},
						{1,0,0,0,1},
						{1,0,0,0,1} };

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (star[i][j] == 1) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	return 0;
}
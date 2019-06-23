#include <stdio.h>
#include <string.h>
int main() {
	char array[2][19] = { "Hello World", "Junior High School" };

	array[0][6] = 0;
	array[1][7] = 0;
	
	printf("%s", array[0]);
	printf("%s", array[1]);

	return 0;
}
#include <stdio.h>

int main() {
	//char text[5] = { "N", "O", "P", "W", "R" };
	char *text[5] = { "Power", "OverClock", "Watt", "Electric", "Reverse" };

	for (int i = 0; i < 5; i++) {
		printf("%s\n", text[i]);
	}
	printf("\n이것이 포인터배열의 힘!");
	printf("\n그냥 배열은 이렇게 여러개 못 출력하지. 하하하! 보았나 이 *별*의 힘을 말이다!!\n\n");
	return 0;
}
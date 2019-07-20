#include <stdio.h>
#include <Windows.h>

gotoxy(int x, int y) {
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int main() {
	gotoxy(10, 10);
	printf("wow!");
}

// http://egloos.zum.com/EireneHue/v/350618
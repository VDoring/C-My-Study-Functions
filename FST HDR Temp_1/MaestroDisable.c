#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include <string.h>

gotoxy(int x, int y) {
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int main() {
	system("mode con cols=40 lines=13");
	int x = 0, y = 0;

	int input1, input2;

	const char Service_Agent[50] = { "taskkill /F /IM MaestroNAgent.exe" };
	const char Service_Svr[50] = { "taskkill /F /IM MaestroNSvr.exe" };
	const char File_Agent[100] = { "del /q \"C:\Program Files(x86)\Solusseum\MaestroNet Agent4\MaestroNAgent.exe\"" };
	const char File_Svr[100] = { "del /q \"C:\Program Files(x86)\Solusseum\MaestroNet Agent4\MaestroNSvr.exe\"" };

	gotoxy(x + 5, y + 1); printf("[ Teacher Monitoring Disabler ]");
	gotoxy(x + 15, y + 4); printf("[1] Run");
	gotoxy(x + 15, y + 6); printf("[2] Exit");
	gotoxy(x, y + 8); printf("________________________________________");
	gotoxy(x + 10, y + 10); printf("Input : ");
	gotoxy(x + 19, y + 10); scanf_s("%d", &input1);
	if (input1 == 1) {
		system("mode con cols=40 lines=13");
		gotoxy(x + 15, y + 1); printf("!!WARNING!!");
		gotoxy(x + 2, y + 3); printf("이것을 작동한 이후에는");
		gotoxy(x + 2, y + 4); printf("선생님과의 연결이 완전히 끊어져");
		gotoxy(x + 2, y + 5); printf("추후 과제등을 제출할 수 없게 됩니다.");
		gotoxy(x + 2, y + 6); printf("(되돌리고싶다면 재부팅 하십시오)");
		gotoxy(x + 10, y + 8); printf("계속하시겠습니까?");
		gotoxy(x + 10, y + 9); printf("[1] yes    [2] No");
		gotoxy(x + 10, y + 11); printf("Input : ");
		gotoxy(x + 19, y + 11); scanf_s("%d", &input2);
		if (input2 == 1) {
			system("mode con cols=40 lines=13");

			system(Service_Agent); Sleep(100);
			system(Service_Svr); Sleep(100);
			system(File_Agent); Sleep(100);
			system(File_Svr); Sleep(50);

			gotoxy(x + 13, y + 5); printf("작동하였습니다."); Sleep(800);
			return 0;
		}
		else if (input2 == 2) return 2;
	}
	if (input1 == 2) return 1;

	return -1;
}
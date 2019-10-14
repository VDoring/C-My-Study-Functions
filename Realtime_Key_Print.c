#include <stdio.h>
#include <conio.h>

int main() {
	int key;
	int i = 0;

	while (1) {
		if (kbhit()) {
			key = getch();
			if (key == 224 || key == 0) {

				key = getch();
				
				switch (key) {
				case 72:
					printf("UP\n");
					break;
				case 75:
					printf("LEFT\n");
					break;
				case 77:
					printf("RIGHT\n");
					break;
				case 80:
					printf("DOWN\n");
					break;
				default:
					printf("I Don't know_1\n");
					break;
				}
			}
			else {
				if (key == 13)
					printf("Enter Key\n");
				else if (key >= 65 && key <= 90)
					printf("영어대문자\n");
				else if (key >= 97 && key <= 122)
					printf("영어소문자\n");
				else if (key >= 48 && key <= 57)
					printf("숫자키\n");
				else
					printf("I Don't know_2\n");
			}
		}
	}

	return 0;
}

// http://blog.naver.com/PostView.nhn?blogId=sharonichoya&logNo=220875372940
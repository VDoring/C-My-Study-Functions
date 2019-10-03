#include <stdio.h>
#include <string.h>
int main() {
	int First; //처음 메뉴선택시 사용하는 변수

	int CPU_select, MB_select; //CPU를 선택할때 사용하는 변수

	printf("HDR's PC Booting Project!\n\n");
	printf("메뉴를 선택하세요\n");
	printf("1. 시작\t2. 초기화\t3. 종료\n\n"); //메뉴
	scanf("%d", &First);

	if (First == 1) {
		printf("CPU를 선택하세요\n"); //CPU 선택하기
		printf("1. I5 - 6500\t2. I5 - 2500\t3. I7 - 8700K\t4.R7 2700X\n"); //CPU목록
		while (1) {
			scanf("%d", &CPU_select);
			if (CPU_select == 1) { //1번 CPU
				char CPU_name[20] = { "I5 - 6500" };
				char CPU_socket[20] = { "LGA1151" };
				int CPU_core = 4, CPU_thread = 4, CPU_tdp = 65;
				float CPU_clock = 3.2f, CPU_boostclock = 3.6f;
				printf("[CPU] \"I5 - 6500\"선택이 완료되었습니다!");
				break;
			}
			if (CPU_select == 2) { //2번 CPU
				char CPU_name[20] = { "I5 - 2500" };
				char CPU_socket[20] = { "LGA1155" };
				int CPU_core = 4, CPU_thread = 4, CPU_tdp = 95;
				float CPU_clock = 3.3f, CPU_boostclock = 3.6f;
				printf("[CPU] \"I5 - 2500\"선택이 완료되었습니다!");
				break;
			}
			if (CPU_select == 3) { //3번 CPU

			}
			if (CPU_select == 4) { //4번 CPu

			}
			else printf("다시 입력해주세요\n\n");
		}
		printf("M/B를 선택하세요\n");
		printf("1. B150\t2. H67\t3. Z390\t4. B450\n");
		scanf("%d", &MB_select);
		if (MB_select == 1) { //1번 MB

		}
		if (MB_select == 2) { //2번 MB

		}
		if (MB_select == 3) { //3번 MB

		}
		if (MB_select == 4) { //4번 MB

		}
	}
	if (First == 2) {
		printf("\n\n데이터가 초기화 되었습니다.\n");
	}
}
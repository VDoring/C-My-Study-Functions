#include <stdio.h>
#include <string.h>
int main() {
	int First; //ó�� �޴����ý� ����ϴ� ����

	int CPU_select, MB_select; //CPU�� �����Ҷ� ����ϴ� ����

	printf("HDR's PC Booting Project!\n\n");
	printf("�޴��� �����ϼ���\n");
	printf("1. ����\t2. �ʱ�ȭ\t3. ����\n\n"); //�޴�
	scanf("%d", &First);

	if (First == 1) {
		printf("CPU�� �����ϼ���\n"); //CPU �����ϱ�
		printf("1. I5 - 6500\t2. I5 - 2500\t3. I7 - 8700K\t4.R7 2700X\n"); //CPU���
		while (1) {
			scanf("%d", &CPU_select);
			if (CPU_select == 1) { //1�� CPU
				char CPU_name[20] = { "I5 - 6500" };
				char CPU_socket[20] = { "LGA1151" };
				int CPU_core = 4, CPU_thread = 4, CPU_tdp = 65;
				float CPU_clock = 3.2f, CPU_boostclock = 3.6f;
				printf("[CPU] \"I5 - 6500\"������ �Ϸ�Ǿ����ϴ�!");
				break;
			}
			if (CPU_select == 2) { //2�� CPU
				char CPU_name[20] = { "I5 - 2500" };
				char CPU_socket[20] = { "LGA1155" };
				int CPU_core = 4, CPU_thread = 4, CPU_tdp = 95;
				float CPU_clock = 3.3f, CPU_boostclock = 3.6f;
				printf("[CPU] \"I5 - 2500\"������ �Ϸ�Ǿ����ϴ�!");
				break;
			}
			if (CPU_select == 3) { //3�� CPU

			}
			if (CPU_select == 4) { //4�� CPu

			}
			else printf("�ٽ� �Է����ּ���\n\n");
		}
		printf("M/B�� �����ϼ���\n");
		printf("1. B150\t2. H67\t3. Z390\t4. B450\n");
		scanf("%d", &MB_select);
		if (MB_select == 1) { //1�� MB

		}
		if (MB_select == 2) { //2�� MB

		}
		if (MB_select == 3) { //3�� MB

		}
		if (MB_select == 4) { //4�� MB

		}
	}
	if (First == 2) {
		printf("\n\n�����Ͱ� �ʱ�ȭ �Ǿ����ϴ�.\n");
	}
}
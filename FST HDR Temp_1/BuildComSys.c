#include <stdio.h>
#include <string.h>
int main() {
	int First; //ó�� �޴����ý� ����ϴ� ����

	int CPU_select, MB_select, RAM_select, VGA_select, SSD_select, HDD_select, CASE_select, CPUCooler_select, PSU_select; //CPU�� �����Ҷ� ����ϴ� ����

	printf("HDR's PC Booting Project!\n\n");
	printf("�޴��� �����ϼ���(��ȣ �Է�)\n\n");
	printf("-------------------------------\n");
	printf("1. ����\n2. �ʱ�ȭ\n3. ����\n\n"); //�޴�
	printf("-------------------------------\n");
	scanf("%d", &First);

	if (First == 1) {
		printf("\n\n[CPU]�� �����ϼ���\n\n"); //CPU �����ϱ�
		printf("1. I5-6500\t2. I7-9700K\n"); //CPU���
		while (1) {
			scanf("%d", &CPU_select);
			if (CPU_select == 1) { //1�� CPU (Intel I5 - 6500)
				char CPU_name[20] = { "I5 - 6500" };
				char CPU_socket[20] = { "LGA1151" };
				int CPU_core = 4, CPU_thread = 4, CPU_tdp = 65;
				float CPU_clock = 3.2f, CPU_boostclock = 3.6f;
				printf("\n[CPU] \"I5 - 6500\"������ �Ϸ�Ǿ����ϴ�!\n");
				break;
			}
			if (CPU_select == 2) { //2�� CPU (Intel I7 - 9700K)
				char CPU_name[20] = { "I7 - 9700K" };
				char CPU_socket[20] = { "LGA1151v2" };
				int CPU_core = 8, CPU_thread = 8, CPU_tdp = 95;
				float CPU_clock = 3.6f, CPU_boostclock = 4.9f;
				printf("\n[CPU] \"I7 - 9700K\"������ �Ϸ�Ǿ����ϴ�!\n");
				break;
			}
			else printf("�ٽ� �Է����ּ���\n\n");
		}
		printf("\n\n\n[M/B]�� �����ϼ���\n\n");
		printf("1. B150\t2. Z390\n");
		while (1) {
			scanf("%d", &MB_select);
			if (MB_select == 1) { //1�� MB (ASRock B150 Pro4)
				char MB_socket[20] = { "LGA1151" };
				char MB_chipset[20] = { "B150" };
				char MB_formfactor[20] = { "M - ATX" };
				char MB_ramsocket[20] = { "DDR4" };
				int MB_ram_slot = 4, MB_sata_slot = 6, MB_m2_slot = 0;
				int MB_Overclock = 0; //0�� �����Ұ�, 1�� �������� ����
				printf("[M/B] \"B150\"������ �Ϸ�Ǿ����ϴ�!\n");
				break;
			}
			if (MB_select == 2) { //2�� MB (ASRock Z390 EXTREME 4)
				char MB_socket[20] = { "LGA1151v2" };
				char MB_chipset[20] = { "Z390" };
				char MB_formfactor[20] = { "ATX" };
				char MB_ramsocket[20] = { "DDR4" };
				int MB_ram_slot = 4, MB_sata_slot = 8, MB_m2_slot = 2;
				int MB_Overclock = 1; //0�� �����Ұ�, 1�� �������� ����
				printf("[M/B] \"Z370\"������ �Ϸ�Ǿ����ϴ�!\n");
				break;
			}
			else printf("�ٽ� �Է����ּ���\n\n");
		}
		printf("RAM�� �����ϼ���");
		printf("1. DDR4-8GB(2133MHz)\t2. DDR4-8GB(4300MHz)\n");
		while (1) {
			scanf("%d", &RAM_select);
			if (RAM_select == 1) { //1�� RAM (Samsung DDR4 8GB(17000, 2133) normal)
				char RAM_formfactor[20] = { "DIMM" };
				int RAM_capacity = 8; //GB���� ���
				int RAM_clock = 2133;
				int RAM_timing_CL = 15, RAM_timing_TRCD = 15, RAM_timing_TRP = 15, RAM_timing_TRAS = 35;
				float RAM_voltage = 1.2f;
				int RAM_heatsink = 0; //0�� ����, 1�� ����. �µ� �ٿ� ����(������ ����)
				printf("[RAM] \"DDR4-2133\"������ �Ϸ�Ǿ����ϴ�!\n");
				break;
			}
			if (RAM_select == 2) { //2�� RAM (TeamGroup T-Force XTREEM DDR4 8GB (34400, 4300) normal)
				char RAM_formfactor[20] = { "DIMM" };
				int RAM_capacity = 8; //GB���� ���
				int RAM_clock = 4300;
				int RAM_timing_CL = 18, RAM_timing_TRCD = 20, RAM_timing_TRP = 20, RAM_timing_TRAS = 44;
				float RAM_voltage = 1.45f;
				int RAM_heatsink = 1; //0�� ����, 1�� ����. �µ� �ٿ� ����(������ ����)
				printf("[RAM] \"DDR4-4300\"������ �Ϸ�Ǿ����ϴ�!\n");
				break;
			}
			else printf("�ٽ� �Է����ּ���\n\n");
		}
		printf("VGA�� �����ϼ���");
		printf("1. GTX1060 6GB\t2. RTX2080 8GB\n");
		while (1) {
			scanf("%d", &VGA_select);
			if (VGA_select == 1) { //1�� VGA (ZOTAC AMP GTX1060 D5 6GB Backplate)
				char VGA_interface[20] = { "PCIe 3.0 x 16" };
				char VGA_vram_formfactor[20] = { "GDDR5" };
				int VGA_power = 120;
				int VGA_power_Capacitor_unit = 5; //������ ����(������) ����
				int VGA_CUDA = 1280;
				int VGA_clock = 1556, VGA_boostclock = 1771;
				int VGA_vram_clock = 8000;
				int VGA_vram_capacity = 6; //GB���� ���
				int VGA_output_DVI = 1, VGA_output_DP = 3, VGA_output_HDMI = 1;
				int VGA_fan = 2, VGA_width = 210;
				int VGA_backplate = 1; //0�� ����, 1�� ����. �µ� �ٿ� ����(������ ����)
				printf("[VGA] \"GTX1060 6GB\"������ �Ϸ�Ǿ����ϴ�!\n");
				break;
			}
			if (VGA_select == 2) { //2�� VGA (MSI Gaming Trio RTX2080)
				char VGA_interface[20] = { "PCIe 3.0 x 16" };
				char VGA_vram_formfactor[20] = { "GDDR6" };
				int VGA_power = 260;
				int VGA_power_Capacitor_unit = 12; //������ ����(������) ����
				int VGA_CUDA = 2944;
				int VGA_clock = 1515, VGA_boostclock = 1860;
				int VGA_vram_clock = 14000;
				int VGA_vram_capacity = 8; //GB���� ���
				int VGA_output_USBtypeC = 1, VGA_output_DP = 3, VGA_output_HDMI = 1;
				int VGA_fan = 3, VGA_width = 327;
				int VGA_backplate = 1; //0�� ����, 1�� ����. �µ� �ٿ� ����(������ ����)
				printf("[VGA] \"RTX2080 8GB\"������ �Ϸ�Ǿ����ϴ�!\n");
				break;
			}
			else printf("�ٽ� �Է����ּ���\n\n");
		}
		printf("SSD�� �����ϼ���");
		printf("1. SATA SSD(500GB)\t2. M.2 NVMe SSD(500GB)\n");
		while (1) {
			scanf("%d", &SSD_select);
			if (SSD_select == 1) { //1�� SSD (Micron MX500 500GB)
				char SSD_interface[20] = { "SATA3" };
				char SSD_Nand[20] = { "TLC 3D" };
				char SSD_Controller[30] = { "Silicon motion SM2258" };
				char SSD_Read_IOPS = { "95K" };
				char SSD_Write_IOPS = { "90K" };
				int SSD_capacity = 500;
				int SSD_Read = 560, SSD_Write = 510;
				float SSD_formfactor = 2.5f;
				printf("[SSD] \"SATA SSD 500GB\"������ �Ϸ�Ǿ����ϴ�!\n");
				break;
			}
			if (SSD_select == 2) { //2�� SSD (Samsung 960 Pro M.2 512GB)
				printf("SSD ���� �����ϱ�");
				break;
			}
			else printf("�ٽ� �Է����ּ���\n\n");
		}
		printf("HDD�� �����ϼ���");
		printf("1. SATA HDD (1TB)\t2. SA-SCSI HDD(900GB)\n");
		while (1) {
			scanf("%d", &HDD_select);
			if (HDD_select == 1) {
				printf("�ϵ� ���� �����ϱ� 1");
				break;
			}
			if (HDD_select == 2) {
				printf("�ϵ� ���� �����ϱ� 2");
				break;
			}
		}
	}
	if (First == 2) {
		printf("\n\n�����Ͱ� �ʱ�ȭ �Ǿ����ϴ�.\n");
		//�� ��ǰ�� ����� ���� �ʱ�ȭ ���� �ֱ�
	}
}


/* PSU �����Ҷ� ���ݱ��� �� ��� ��ǰ�� �Һ������� �̸� �����ְ��ϱ� */
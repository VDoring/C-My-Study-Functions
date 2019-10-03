#include <stdio.h>
#include <string.h>
int main() {
	int First; //처음 메뉴선택시 사용하는 변수

	int CPU_select, MB_select, RAM_select, VGA_select, SSD_select, HDD_select, CASE_select, CPUCooler_select, PSU_select; //CPU를 선택할때 사용하는 변수

	printf("HDR's PC Booting Project!\n\n");
	printf("메뉴를 선택하세요(번호 입력)\n\n");
	printf("-------------------------------\n");
	printf("1. 시작\n2. 초기화\n3. 종료\n\n"); //메뉴
	printf("-------------------------------\n");
	scanf("%d", &First);

	if (First == 1) {
		printf("\n\n[CPU]를 선택하세요\n\n"); //CPU 선택하기
		printf("1. I5-6500\t2. I7-9700K\n"); //CPU목록
		while (1) {
			scanf("%d", &CPU_select);
			if (CPU_select == 1) { //1번 CPU (Intel I5 - 6500)
				char CPU_name[20] = { "I5 - 6500" };
				char CPU_socket[20] = { "LGA1151" };
				int CPU_core = 4, CPU_thread = 4, CPU_tdp = 65;
				float CPU_clock = 3.2f, CPU_boostclock = 3.6f;
				printf("\n[CPU] \"I5 - 6500\"선택이 완료되었습니다!\n");
				break;
			}
			if (CPU_select == 2) { //2번 CPU (Intel I7 - 9700K)
				char CPU_name[20] = { "I7 - 9700K" };
				char CPU_socket[20] = { "LGA1151v2" };
				int CPU_core = 8, CPU_thread = 8, CPU_tdp = 95;
				float CPU_clock = 3.6f, CPU_boostclock = 4.9f;
				printf("\n[CPU] \"I7 - 9700K\"선택이 완료되었습니다!\n");
				break;
			}
			else printf("다시 입력해주세요\n\n");
		}
		printf("\n\n\n[M/B]를 선택하세요\n\n");
		printf("1. B150\t2. Z390\n");
		while (1) {
			scanf("%d", &MB_select);
			if (MB_select == 1) { //1번 MB (ASRock B150 Pro4)
				char MB_socket[20] = { "LGA1151" };
				char MB_chipset[20] = { "B150" };
				char MB_formfactor[20] = { "M - ATX" };
				char MB_ramsocket[20] = { "DDR4" };
				int MB_ram_slot = 4, MB_sata_slot = 6, MB_m2_slot = 0;
				int MB_Overclock = 0; //0은 오버불가, 1은 오버가능 구분
				printf("[M/B] \"B150\"선택이 완료되었습니다!\n");
				break;
			}
			if (MB_select == 2) { //2번 MB (ASRock Z390 EXTREME 4)
				char MB_socket[20] = { "LGA1151v2" };
				char MB_chipset[20] = { "Z390" };
				char MB_formfactor[20] = { "ATX" };
				char MB_ramsocket[20] = { "DDR4" };
				int MB_ram_slot = 4, MB_sata_slot = 8, MB_m2_slot = 2;
				int MB_Overclock = 1; //0은 오버불가, 1은 오버가능 구분
				printf("[M/B] \"Z370\"선택이 완료되었습니다!\n");
				break;
			}
			else printf("다시 입력해주세요\n\n");
		}
		printf("RAM을 선택하세요");
		printf("1. DDR4-8GB(2133MHz)\t2. DDR4-8GB(4300MHz)\n");
		while (1) {
			scanf("%d", &RAM_select);
			if (RAM_select == 1) { //1번 RAM (Samsung DDR4 8GB(17000, 2133) normal)
				char RAM_formfactor[20] = { "DIMM" };
				int RAM_capacity = 8; //GB단위 사용
				int RAM_clock = 2133;
				int RAM_timing_CL = 15, RAM_timing_TRCD = 15, RAM_timing_TRP = 15, RAM_timing_TRAS = 35;
				float RAM_voltage = 1.2f;
				int RAM_heatsink = 0; //0은 없음, 1은 있음. 온도 다운 역할(오버에 용이)
				printf("[RAM] \"DDR4-2133\"선택이 완료되었습니다!\n");
				break;
			}
			if (RAM_select == 2) { //2번 RAM (TeamGroup T-Force XTREEM DDR4 8GB (34400, 4300) normal)
				char RAM_formfactor[20] = { "DIMM" };
				int RAM_capacity = 8; //GB단위 사용
				int RAM_clock = 4300;
				int RAM_timing_CL = 18, RAM_timing_TRCD = 20, RAM_timing_TRP = 20, RAM_timing_TRAS = 44;
				float RAM_voltage = 1.45f;
				int RAM_heatsink = 1; //0은 없음, 1은 있음. 온도 다운 역할(오버에 용이)
				printf("[RAM] \"DDR4-4300\"선택이 완료되었습니다!\n");
				break;
			}
			else printf("다시 입력해주세요\n\n");
		}
		printf("VGA를 선택하세요");
		printf("1. GTX1060 6GB\t2. RTX2080 8GB\n");
		while (1) {
			scanf("%d", &VGA_select);
			if (VGA_select == 1) { //1번 VGA (ZOTAC AMP GTX1060 D5 6GB Backplate)
				char VGA_interface[20] = { "PCIe 3.0 x 16" };
				char VGA_vram_formfactor[20] = { "GDDR5" };
				int VGA_power = 120;
				int VGA_power_Capacitor_unit = 5; //전원부 유닛(페이즈) 갯수
				int VGA_CUDA = 1280;
				int VGA_clock = 1556, VGA_boostclock = 1771;
				int VGA_vram_clock = 8000;
				int VGA_vram_capacity = 6; //GB단위 사용
				int VGA_output_DVI = 1, VGA_output_DP = 3, VGA_output_HDMI = 1;
				int VGA_fan = 2, VGA_width = 210;
				int VGA_backplate = 1; //0은 없음, 1은 있음. 온도 다운 역할(오버에 용이)
				printf("[VGA] \"GTX1060 6GB\"선택이 완료되었습니다!\n");
				break;
			}
			if (VGA_select == 2) { //2번 VGA (MSI Gaming Trio RTX2080)
				char VGA_interface[20] = { "PCIe 3.0 x 16" };
				char VGA_vram_formfactor[20] = { "GDDR6" };
				int VGA_power = 260;
				int VGA_power_Capacitor_unit = 12; //전원부 유닛(페이즈) 갯수
				int VGA_CUDA = 2944;
				int VGA_clock = 1515, VGA_boostclock = 1860;
				int VGA_vram_clock = 14000;
				int VGA_vram_capacity = 8; //GB단위 사용
				int VGA_output_USBtypeC = 1, VGA_output_DP = 3, VGA_output_HDMI = 1;
				int VGA_fan = 3, VGA_width = 327;
				int VGA_backplate = 1; //0은 없음, 1은 있음. 온도 다운 역할(오버에 용이)
				printf("[VGA] \"RTX2080 8GB\"선택이 완료되었습니다!\n");
				break;
			}
			else printf("다시 입력해주세요\n\n");
		}
		printf("SSD를 선택하세요");
		printf("1. SATA SSD(500GB)\t2. M.2 NVMe SSD(500GB)\n");
		while (1) {
			scanf("%d", &SSD_select);
			if (SSD_select == 1) { //1번 SSD (Micron MX500 500GB)
				char SSD_interface[20] = { "SATA3" };
				char SSD_Nand[20] = { "TLC 3D" };
				char SSD_Controller[30] = { "Silicon motion SM2258" };
				char SSD_Read_IOPS = { "95K" };
				char SSD_Write_IOPS = { "90K" };
				int SSD_capacity = 500;
				int SSD_Read = 560, SSD_Write = 510;
				float SSD_formfactor = 2.5f;
				printf("[SSD] \"SATA SSD 500GB\"선택이 완료되었습니다!\n");
				break;
			}
			if (SSD_select == 2) { //2번 SSD (Samsung 960 Pro M.2 512GB)
				printf("SSD 스펙 설정하기");
				break;
			}
			else printf("다시 입력해주세요\n\n");
		}
		printf("HDD를 선택하세요");
		printf("1. SATA HDD (1TB)\t2. SA-SCSI HDD(900GB)\n");
		while (1) {
			scanf("%d", &HDD_select);
			if (HDD_select == 1) {
				printf("하드 스펙 설정하기 1");
				break;
			}
			if (HDD_select == 2) {
				printf("하드 스펙 설정하기 2");
				break;
			}
		}
	}
	if (First == 2) {
		printf("\n\n데이터가 초기화 되었습니다.\n");
		//각 부품별 선언된 변수 초기화 구문 넣기
	}
}


/* PSU 선택할때 지금까지 고른 모든 부품의 소비전력을 미리 보여주게하기 */
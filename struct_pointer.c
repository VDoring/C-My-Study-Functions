#include <stdio.h>
#include <string.h>

struct PC {
	int CPU_Core;
	int RAM_Capacity;
	char SYS_Name[20];
};

int main() {
	struct PC NormalPC;
	struct PC *ptrPC;

	ptrPC = &NormalPC;

	(*ptrPC).CPU_Core = 4;
	ptrPC->RAM_Capacity = 16;

	printf("���������� \"*\" : %d\n", (*ptrPC).CPU_Core);
	printf("�������������� \"->\" : %d\n", ptrPC->CPU_Core);

	printf("���������� \"*\" : %d\n", (*ptrPC).RAM_Capacity);
	printf("���������� \"->\" : %d\n", ptrPC->RAM_Capacity);
}
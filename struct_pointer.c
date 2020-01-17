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

	printf("참조연산자 \"*\" : %d\n", (*ptrPC).CPU_Core);
	printf("간접참조연산자 \"->\" : %d\n", ptrPC->CPU_Core);

	printf("참조연산자 \"*\" : %d\n", (*ptrPC).RAM_Capacity);
	printf("간접연산자 \"->\" : %d\n", ptrPC->RAM_Capacity);
}
#include <stdio.h>
int main()
{
	int First_select;

	printf("Welcome to Doring's Calculator!\n");
	printf("\tSelect Calculator type!\n\n1. Plus(+)\n2. minus(-)\n");
	scanf("%d", &First_select);

	if (First_select == 1) {
		int pa, pb;
		int p_result;
		printf("Plus Computation\n");
		scanf("%d %d", &pa, &pb);
		p_result = pa + pb;
		printf("\n\t[Result] %d", p_result);
	}
	else if (First_select == 2) {
		int ma, mb;
		int m_result;
		printf("Minus Computation\n");
		scanf("%d %d", &ma, &mb);
		m_result = ma - mb;
		printf("\n\t[Result] %d", m_result);
	}
	else printf("Try again.");
}
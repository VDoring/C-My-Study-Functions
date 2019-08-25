/*
	<기본적인 자료형과 배열의 크기>
	
	char a; = char형 1바이트
	int b; = int형 4바이트
	double c; = double형 8바이트
	char d[10]; = char[10]형, 10바이트
	int e[5][10]; = int[5][10]형, 200바이트
	(200바이트가 되는 이유 = int형(4바이트) x [10] = 40
									40 ㅌ 5 = 200
*/

#include <stdio.h>

int main()
{
    int *pb;
    
    int a = 0;
    pb = &a; //이제 pb는 a의 주솟값에 접근할 수 있음
    *pb = 3; //*pb가 3이면 a의 주솟값도 3이 됨
    printf("%d %d\n", a, *pb); // 3 3 출력
    *pb = 5; //*pb가 5이면 a의 주솟값도 5이 됨
    printf("%d %d", a, *pb); // 5 5 출력
    
    
    /* 포인터와 일반 자료형의 크기 비교 */
    printf("\n%d\n", sizeof(pb)); //포인터 변수이므로 8바이트
    printf("%d", sizeof(*pb)); //포인터가 아닌 int형으로 접근하였으므로 4바이트
	
    return 0;
}

// https://www.acmicpc.net/blog/view/32
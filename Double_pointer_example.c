#include <stdio.h>

int main() {
    
    int *num1; //단일 포인터
    int **num2; //이중 포인터
    int number = 10;
    
    num1 = &number; //number의 메모리 주소 저장
    printf("%p\n", num1);
    printf("%p\n", &num1);
    
    
    num2 = &num1; //num2의 메모리 주소 저장
    printf("%p\n", num2);
    printf("%p\n\n", &num2);
    
    
    printf("%d\n", **num2); //포인터 두번 역참조, num1메모리 주소에 접근
    
    return 0;
    
}

/* https://dojang.io/mod/page/view.php?id=279 */
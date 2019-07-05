#include <stdio.h> 

int main()
{
    int num1 = 5;
    int num2;
 
    num2 = num1 ? 100 : 200;    // num1이 참이면 num2에 100을 할당, 거짓이면 num2에 200을 할당
    //원래는        num1        ?       100          :          200;
    //       T/F판단하는 변수          T일때 사용           F일때 사용
    
    
    printf("%d\n", num2);    // 100: num1이 5이므로 참. num2에는 100이 할당됨
 
    return 0;
}
#include <stdio.h>

int factorial(int n) {
    
    if(n == 1) return 1; //n�� 1�϶�, 1�� ��ȯ�ϰ� ���ȣ���� ����
    
    return n * factorial(n - 1); //n�� factorial�Լ��� n -1�� �־ ��ȯ�� ���� ����
    
}


int main() {
    
    printf("%d", factorial(5));
    
    return 0;
    
}

//���� ��°� : 120
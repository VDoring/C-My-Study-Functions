#include <stdio.h> 

int main()
{
    int num1 = 5;
    int num2;
 
    num2 = num1 ? 100 : 200;    // num1�� ���̸� num2�� 100�� �Ҵ�, �����̸� num2�� 200�� �Ҵ�
    //������        num1        ?       100          :          200;
    //       T/F�Ǵ��ϴ� ����          T�϶� ���           F�϶� ���
    
    
    printf("%d\n", num2);    // 100: num1�� 5�̹Ƿ� ��. num2���� 100�� �Ҵ��
 
    return 0;
}
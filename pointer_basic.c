/*
	<�⺻���� �ڷ����� �迭�� ũ��>
	
	char a; = char�� 1����Ʈ
	int b; = int�� 4����Ʈ
	double c; = double�� 8����Ʈ
	char d[10]; = char[10]��, 10����Ʈ
	int e[5][10]; = int[5][10]��, 200����Ʈ
	(200����Ʈ�� �Ǵ� ���� = int��(4����Ʈ) x [10] = 40
									40 �� 5 = 200
*/

#include <stdio.h>

int main()
{
    int *pb;
    
    int a = 0;
    pb = &a; //���� pb�� a�� �ּڰ��� ������ �� ����
    *pb = 3; //*pb�� 3�̸� a�� �ּڰ��� 3�� ��
    printf("%d %d\n", a, *pb); // 3 3 ���
    *pb = 5; //*pb�� 5�̸� a�� �ּڰ��� 5�� ��
    printf("%d %d", a, *pb); // 5 5 ���
    
    
    /* �����Ϳ� �Ϲ� �ڷ����� ũ�� �� */
    printf("\n%d\n", sizeof(pb)); //������ �����̹Ƿ� 8����Ʈ
    printf("%d", sizeof(*pb)); //�����Ͱ� �ƴ� int������ �����Ͽ����Ƿ� 4����Ʈ
	
    return 0;
}

// https://www.acmicpc.net/blog/view/32
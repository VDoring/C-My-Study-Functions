/*

memmove can be very useful...... ����, ���ڿ� ���� �ּ� ���� 15 ��° �κ� ����
11 ����Ʈ, �� "very useful" �� ���ڿ� ���� �ּ� ���� 20 ��° �κ�, �� "use~"
�κп� ������ �ִ´�. �ٽø���, �� ���ڿ��� "memmove can be very very useful."
�� �ȴ�. �� ������ http://www.cplusplus.com/reference/clibrary/cstring/memmove/
���� �����Խ��ϴ�.

 */
#include <stdio.h>
#include <string.h>

int main() {
	char str[] = "memmove can be very useful.......";
	memmove(str + 20, str + 15, 11); //str�� 15��? �κк��� 11����Ʈ(very useful �κ�)�� str�� 20��° �κ�(useful �ٷ� �պκ�)�� ������ ����.
									// ��� : memmove can be very very useful.
	puts(str);
	return 0;
}

//https://modoocode.com/78
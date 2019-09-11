#include <stdio.h>

int main()
{
    int *pb;
    int a = 0;
    pb = &a;
    
    pb[0] = 3;
    printf("%d %d", a, pb[0]);
    
    return 0;
}

// https://www.acmicpc.net/blog/view/32
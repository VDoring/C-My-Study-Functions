#include <stdio.h>

void hello(int count) {
    
    if(count == 0) return; //��������, count�� 0�� �Ǹ� �����
    
    printf("Hello? %d\n", count);
    
    hello(--count);
    
}

int main() {
  
  hello(3);
  return 0;
  
}
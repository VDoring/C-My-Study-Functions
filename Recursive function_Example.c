#include <stdio.h>

void hello(int count) {
    
    if(count == 0) return; //종료조건, count가 0이 되면 종료됨
    
    printf("Hello? %d\n", count);
    
    hello(--count);
    
}

int main() {
  
  hello(3);
  return 0;
  
}
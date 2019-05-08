#include <stdio.h>

int main(){
  int num = 5;
  int *p;
  p = &num;

  printf(" num: %d\n", num);
  printf("  *p: %d\n", *p);
  printf("   p: %d\n", p);
  printf("&num: %d\n", &num);
  return 0;
}

// *p는 num의 값을 나타내고
//  p는 num의 주소를 나타낸다.

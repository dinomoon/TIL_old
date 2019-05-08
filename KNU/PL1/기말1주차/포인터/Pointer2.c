#include <stdio.h>

void ChangePlusOne(int *n){
  *n += 1;
}

int main(){
  int number = 3;
  printf("%d\n", number);

  number = 5;
  printf("%d\n", number);

  ChangePlusOne(&number); // 포인터는 그 변수를 가리키는 것이기 때문에 number가 증가됨!!
  printf("%d\n", number);

  return 0;
}

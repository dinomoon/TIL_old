// 220p
// swap 함수를 main함수 위에 쓰면 동작을 하지 않고 밑에 써야 동작함.. 왜...?
// call by value 와 call by address
#include <iostream>
using namespace std;
void swap(int i, int j){
  int t = i;
  i = j;
  j = t;
}
int main(){
  int a = 3, b = 4;
  int c = 5, d = 7;

  cout << a << " " << b << endl;
  swap(a,b);
  cout << a << " " << b << endl;
  return 0;
}

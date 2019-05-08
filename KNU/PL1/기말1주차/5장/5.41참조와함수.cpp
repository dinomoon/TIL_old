#include <iostream>
using namespace std;

// 참조에 의한 호출!! (주소에 의한 호출과 비교할 것..!)
void swap(int &a, int &b){
  int tmp;
  tmp = a;
  a = b;
  b = tmp;
}

int main(){
  // 참조의 기본;;;;
  cout << "i" << '\t' << "n" << '\t' << "refn" << endl;
  int i = 1;
  int n = 2;
  int &refn = n; // 참조 변수 refn 선언. refn은 n에 대한 별명;
  n = 4;  // refn = 4, n = 4;
  cout << i << '\t' << n << '\t' << refn << endl;
  refn++; // refn = 5, n = 5;
  cout << i << '\t' << n << '\t' << refn << endl;

  refn = i; // refn = 1, n = 1;
  refn++;  // refn = 2, n = 2;
  cout << i << '\t' << n << '\t' << refn << endl;

  int *p = &refn; // p는 refn의 주소(n의 주소)를 가짐 => p는 n의 주소;
  *p = 20;  // refn = 20, n = 20;
  cout << i << '\t' << n << '\t' << refn << endl;


  // 참조에 의한 호출, call by reference;;
  int q=2, w=9;
  swap(q,w);
  cout << q << ' ' << w << endl;
}

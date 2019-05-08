// 예제 10-2 큰 값을 리턴하는 제네릭 bigger() 함수 만들기

#include <iostream>
using namespace std;

template <class T>
T bigger(T a, T b){
  if(a > b) return a;
  else return b;
}



// 예제 10-3 배열의 합을 구하여 리턴하는 제네릭 add() 함수 만들기 연습
template <class T2>
T2 add(T2 data [], int n){
  T2 sum = 0;
  for(int i=0; i<n; i++){
    sum += data[i];
  }
  return sum;
}


// 예제 10-4 배열을 복사하는 제네릭 mycopy() 함수 만들기 연습
// 두 개의 배열을 매개 변수로 받아 배열을 복사하는 제네릭 mycopy() 함수를 작성하라.
template <class T3, class T4>
void mycopy(T3 src[], T4 dest [], int n){
  for(int i=0; i<n; i++)
    dest[i] = (T4)src[i];
}

int main(){
  // 10-2
  int a=20, b=50;
  char c='a', d='z';
  cout << "bigger(20,50) = " << bigger(a,b) << endl;
  cout << "bigger('a','z') = " << bigger(c, d) << endl;
  // 10-3
  int x[] = {1, 2, 3, 4, 5};
  double y[] = {1.2, 2.3, 3.4, 4.5, 5.6, 6.7};
  cout << "sum of x[] = " << add(x, 5) << endl;
  cout << "sum of y[] = " << add(y, 6) << endl;
  // 10-4
  int q[] = {1, 2, 3, 4, 5};
  double w[5];
  char e[5] = {'H','e','l','l','o'}, r[5];

  mycopy(q, w, 5);
  mycopy(e, r, 5);

  for(int i=0; i<5; i++) cout << w[i] << ' '; // w[] 출력
  cout << endl;
  for(int i=0; i<5; i++) cout << r[i] << ' '; // r[] 출력
  cout << endl;
}

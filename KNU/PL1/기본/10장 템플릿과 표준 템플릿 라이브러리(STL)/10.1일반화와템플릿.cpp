// template 키워드를 이용하면, 중복 함수들을 일반화시킨 특별한 함수를 만들 수 있다.
// 이 함수를 템플릿 함수 혹은 제네릭 함수라고 부른다.

// 예제 10-1 제네릭 myswap()함수 만들기

#include <iostream>
using namespace std;

class Circle{
  int radius;
public:
  Circle(int radius = 1){ this->radius = radius; }
  int getRadius(){ return radius; }
};

template <class T> //template <typename T>도 가능
void myswap(T &a, T &b){
  T tmp;
  tmp = a;
  a = b;
  b = tmp;
}

int main(){
  int a = 4, b = 5;
  myswap(a, b);
  cout << "a: " << a << ", " << "b: " << b << endl;

  double c=0.3, d=12.5;
  myswap(c, d);
  cout << "c: " << c << ", " << "d: " << d << endl;

  Circle donut(5), pizza(30);
  myswap(donut, pizza);
  cout << "donut`s radius: " << donut.getRadius() << ", ";
  cout << "pizza`s radius: " << pizza.getRadius() << endl;
}

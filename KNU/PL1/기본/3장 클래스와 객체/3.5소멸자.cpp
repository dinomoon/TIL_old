// 소멸자란? ( 객체가 소멸되는 시점에서 자동으로 호출되는 클래스의 멤버 함수! )
// 특징
// 1. 소멸자의 목적은 객체가 사라질 때 필요한 마무리 작업을 위함
// 2. 소멸자의 이름은 클래스 이름 앞에 ~를 붙인다.
// 3. 소멸자는 리턴 타입이 없으며 어떤 값을 리턴해서도 안 된다.
// 4. 소멸자는 오직 한 개만 존재하며 매개 변수를 가지지 않는다.
// 5. 소멸자가 선언되어 있지 않으면 기본 소멸자가 자동으로 생성된다.
// 6. 객체는 생성의 반대순으로 소멸된다.

/////////////////////////////////////////////////////////////////////
// 3-7 Circle 클래스에 소멸자 작성 및 실행
#include <iostream>
using namespace std;

class Circle{
public:
  int radius;
  Circle();
  Circle(int r);
  ~Circle(); // 소멸자 선언
  double getArea();
};

Circle::Circle(){
  radius = 1;
  cout << "radius = " << radius << endl;
}

Circle::Circle(int r){
  radius = r;
  cout << "radius = " << radius << endl;
}

Circle::~Circle(){
  cout << "radius = " << radius << endl;
}

double Circle::getArea(){
  return 3.14 * radius * radius;
}

ex1(){
  Circle donut;
  Circle pizza(30);
  return 0;
}

int main(){
  ex1();
}

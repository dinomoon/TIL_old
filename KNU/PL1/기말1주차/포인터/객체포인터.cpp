#include <iostream>
using namespace std;

class Circle{
  int radius;
public:
  Circle(){ radius = 1; };
  Circle(int r){ radius = r; };
  double getArea();
};
double Circle::getArea(){
  return 3.14 * radius * radius;
}

int main(){
  Circle donut;
  Circle pizza(30);

  // 객체 이름으로 접근할 때;
  cout << donut.getArea() << endl;

  // 객체 포인터로 접근할 때;
  Circle *p;
  p = &pizza; // p에 pizza 객체의 주소 저장(객체의 주소는 객체 이름 앞에 &연산자를 사용하여 표현한다.)
  cout << p->getArea() << endl;
}

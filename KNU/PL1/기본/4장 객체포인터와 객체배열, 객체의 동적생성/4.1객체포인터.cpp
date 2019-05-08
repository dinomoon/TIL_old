// 예제 4-1 객체 포인터 선언 및 활용
#include <iostream>
using namespace std;

class Circle{
  int radius;
public:
  Circle(){ radius = 1; }
  Circle(int r){ radius = r; }
  double getArea();
};

double Circle::getArea(){
  return 3.14 * radius * radius;
}

int main(){
  Circle donut;
  Circle pizza(30);

  // 객체 이름으로 멤버 접근
  cout << donut.getArea() << endl;

  // 객체 포인터로 멤버 접근
  Circle *p; // 객체에 대한 포인터 선언
  p = &donut; // 포인터에 객체 주소 저장
  cout << p->getArea() << endl; // 멤버 함수 호출
  cout << (*p).getArea() << endl;

  p = &pizza;
  cout << p->getArea() << endl;
  cout << (*p).getArea() << endl;
}

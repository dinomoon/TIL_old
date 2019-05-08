#include <iostream>
using namespace std;

class Circle{
  int radius;
public:
  Circle(){ radius = 1; };
  Circle(int r){ radius = r; };
  void setRadius(int r){ radius = r; }
  double getArea();
};
double Circle::getArea(){
  return 3.14 * radius * radius;
}

int main(){
  Circle circleArray[3];  // Circle 객체 배열 생성; 객체 배열 선언문은 반드시 기본 생성자를 호출한다.

  circleArray[0].setRadius(10);
  circleArray[1].setRadius(20);
  circleArray[2].setRadius(30);

  for(int i=0; i<3; i++)
    cout << circleArray[i].getArea() <<endl;

  Circle *p;
  p = circleArray;  // 배열은 주소연산자를 쓰지 않아도 된다;
  for(int i=0; i<3; i++){ // 객체 포인터로 배열 접근;
    cout << p->getArea() <<endl;
    p++;
  }

}

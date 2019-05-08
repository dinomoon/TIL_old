// 예제 3-1 Circle 클래스의 객체 생성 및 활용
#include <iostream>
using namespace std;

///////////////////////////////////////////////////
// Circle 선언부
class Circle{
public:
  int radius;
  double getArea();
};

///////////////////////////////////////////////////
// Circle 구현부
double Circle::getArea(){
  return 3.14 * radius * radius;
}
///////////////////////////////////////////////////

ex1(){
  Circle donut; // 객체 donut 생성
  donut.radius = 1; // donut의 멤버 변수 접근, donut 객체의 반지름을 1로 설정
  double area = donut.getArea();  // donut의 멤버 함수 호출, donut 객체의 면적 알아내기
  cout << "donut`s area: " << area << endl;

  Circle pizza;
  pizza.radius = 30;  // pizza 객체의 반지름을 30으로 설정
  area = pizza.getArea(); // pizza 객체의 면적 알아내기
  cout << "pizza`s area: " << area << endl;
}

// 예제 3-2 Rectangle 클래스 만들기
class Rectangle{
public:
  int width;
  int height;
  int getArea();
};

int Rectangle::getArea(){
  return width * height;
}

ex2(){
  Rectangle rect;
  rect.width = 3;
  rect.height = 5;
  cout << "Rectangle`s area: " << rect.getArea() << endl;
}

int main(){
  ex2();
}

// 생성자란? 객체가 생성될 때 자동으로 실행되는 특별한 멤버 함수로 객체를 초기화해준다.
// 특징
// 1. 생정자의 목적은 객체가 생성될 때 필요한 초기 작업을 위함이다.
// 2. 생성자 함수는 오직 한 번만 실행된다.(객체가 생성되는 시점)
// 3. 생성자 함수의 이름은 클래스 이름과 동일하게 작성되어야 한다.
// 4. 생성자 함수의 원형에 리턴 타입을 선언하지 않는다. (리턴을 사용할 수는 있지만 어떠한 값도 리턴해서는 안됨)
// 5. 생성자는 중복 가능하다. (한 클래스에 여러개 만들 수 있다.)

/*
class Circle{
  // 2개의 생성자 함수 선언
  Circle(); // 클래스 이름과 동일
  Circle(int r);  // 리턴 타입 쓰지 않음
};
///////////////////////////////////////////////////
// 생성자 함수 구현
Circle::Circle(){ // 매개 변수 없는 생성자
  ...
}
Circle::Circle(int r){  // 매개 변수를 가진 생성자
  ...
}
*/

// 예제 3-3 2개의 생성자를 가진 circle 클래스
#include <iostream>
using namespace std;

class Circle{
public:
  int radius;
  Circle(); // 기본 생성자
  Circle(int r);  // 매개 변수있는 생성자
  double getArea();
};

Circle::Circle(){
  radius = 1; // 반지름 초기화
  cout << "radius = " << radius << endl;
}

Circle::Circle(int r){
  radius = r; // 반지름 초기화
  cout << "radius = " << radius << endl;
}

double Circle::getArea(){
  return 3.14 * radius * radius;
}

ex1(){
  Circle donut; // 매개 변수없는 생성자 호출
  double area = donut.getArea();
  cout << "donut`s area: " << area << endl;

  Circle pizza(30); // 매개 변수있는 생성자 호출. 30이 r로 전달됨.
  area = pizza.getArea();
  cout << "pizza`s area: " << area << endl;
}

// 생성자와 멤버 변수의 초기화
// 생성자 코드에서 멤버 변수 초기화
/*
class Point{
  int x, y;
public:
  Point();
  Point(int a, int b);
};
Point::Point(){ x = 0; y = 0; }
Point::Point(int a, int b){ x = a; y = b; }
*/

// 예제 3-5 멤버 변수 초기화
class Point{
  int x, y;
public:
  Point();
  Point(int a, int b);
  void show(){ cout << "(" << x << ", " << y << ")" << endl; }
};

Point::Point(){ x = 0; y = 0; }
Point::Point(int a, int b){ x = a; y = b; }

ex2(){
  Point origin;
  Point target(10,20);
  origin.show();
  target.show();
}

// 예제 3-6 정사각형인지 알려주는 Rectangle 클래스 만들기
class Rectangle{
public:
  int width, height;
  Rectangle();  // 생성자
  Rectangle(int w, int h);  // 생성자
  Rectangle(int length); // 생성자
  bool isSquare();
};

Rectangle::Rectangle(){
  width = height = 1;
}

Rectangle::Rectangle(int w, int h){
  width = w; height = h;
}

Rectangle::Rectangle(int length){
  width = height = length;
}

bool Rectangle::isSquare(){
  if(width==height) return true;
  else return false;
}

ex3(){
  Rectangle rect1;
  Rectangle rect2(3,5);
  Rectangle rect3(3);

  if(rect1.isSquare()) cout << "rect1 is right square" << endl;
  if(rect2.isSquare()) cout << "rect2 is right square" << endl;
  if(rect3.isSquare()) cout << "rect3 is right square" << endl;
}
int main(){
  // ex1();
  // ex2();
  ex3();
}

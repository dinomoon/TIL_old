#include<iostream>
using namespace std;

class Circle{
private:
  int radius;
public:
  Circle(Circle &c); // 복사 생성자 생성;;
  Circle(int radius = 1){ this-> radius = radius; }
  double getArea(){ return 3.14 * radius * radius; }
};

Circle::Circle(Circle &c){  // 복사 생성자 구현;
  this -> radius = c.radius+1;
  cout << "running duplication, radius: " << radius << endl;
}

int main(){
  Circle src; // src 객체의 보통 생성자 호출;
  Circle dest(src); // dest 객체의 복사 생성자 호출;

  cout << "original`s area: " << src.getArea() << endl;
  cout << "duplication`s area: " << dest.getArea() << endl;
}

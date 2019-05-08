#include<iostream>
using namespace std;

class Circle{
private:
  int radius;
public:
  Circle();
  Circle(int r);
  ~Circle();
  double getArea(){ return 3.14*radius*radius; }
  int getRadius(){ return radius; }
  void setRadius(int radius){ this->radius = radius; }
};

Circle::Circle(){
  radius = 1;
  cout << "Run the constructor, radius is " << radius << endl;
}
Circle::Circle(int radius){
  this->radius = radius;
  cout << "Run the constructor, radius is " << radius << endl;
}
Circle::~Circle(){
  cout << "Run the destructor, radius is " << radius << endl;
}
//////////////////////////////////////////////////////////////////
// 5.2에서 밑 부분만 변경/////////////////////////////////////////
// 참조에 의한 호출로 Circle 객체의 참조 전달 //////////////////
void increase(Circle &c){
  int r = c.getRadius();
  c.setRadius(r+1);
}

int main(){
  Circle waffle(30);
  increase(waffle);
  cout << waffle.getRadius() << endl;
}

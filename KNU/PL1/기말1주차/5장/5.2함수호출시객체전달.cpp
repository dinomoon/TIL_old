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

void increase(Circle c){
  int r = c.getRadius();
  c.setRadius(r+1);
}

void increase2(Circle *p){
  int r = p->getRadius();
  p->setRadius(r+1);
}
int main(){
  // 값에 의한 호출로 객체 전달
  Circle waffle(30);
  increase(waffle);
  cout << waffle.getRadius() << endl;

  Circle pizza(30);
  increase2(&pizza);
  cout <<pizza.getRadius() << endl;
  // 주소에 의한 호출로 객체 전달

}

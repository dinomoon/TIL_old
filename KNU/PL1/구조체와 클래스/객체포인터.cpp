#include <iostream>
using namespace std;

class Circle{
private:
  int radius;
public:
  Circle(){ radius = 1; }
  Circle(int a){ radius = a; }
  double getArea();
};

double Circle::getArea(){
  return 3.14 * radius * radius;
}

int main(){
  Circle donut;
  cout << donut.getArea() << endl;

  Circle pizza(3);
  cout << pizza.getArea() << endl;

  Circle *p;
  p = &donut;
  cout << p -> getArea() << endl;
}

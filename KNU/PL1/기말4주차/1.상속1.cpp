// 379p Point 클래스를 상속받는 ColorPoint 클래스 만들기
#include <iostream>
#include <string>
using namespace std;

class Point{
  int x, y;
public:
  void set(int x, int y){ this->x = x; this->y = y; }
  void showPoint(){
    cout << "(" << x << "," << ")" << end;
  }
};

class ColorPoint : public Point{
  string color;
public:
  void setColor(string color){ this->color = color; }
  void showColorPoint();
};
void ColorPoint::showColorPoint(){
  cout << color << ":";
  showPoint();
}

int main(){
  Point p;
  ColorPoint cp;
  cp.set(3,4);
  cp.setColor("Red");
  cp.showColorPoint();
}

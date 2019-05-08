// 예제 8-1 Point 클래스를 상속받는 ColorPoint 클래스 만들기
#include <iostream>
#include <string>
using namespace std;

class Point{  // 2차원 평면에서 한 점을 표현하는 클래스 Point 선언
  int x,y;  // 한 점 (x,y) 좌표값
public:
  Point(){ cout << "I make Point class" << endl; }
  ~Point(){ cout << "I remove Point class" << endl; }
  void set(int x, int y){ this->x = x; this->y = y; }
  void showPoint(){
    cout << "(" << x << "," << y<< ")" << endl;
  }
};

class ColorPoint : public Point{  // 2차원 평면에서 컬러 점을 표현하는 클래스, ColorPoint는 Point를 상속받음.
  string color; // 점의 색 표현.
public:
  ColorPoint(){ cout << "I make ColorPoint class" << endl; }
  ~ColorPoint(){ cout << "I remove ColorPoint class" << endl; }
  void setColor(string color){ this->color = color; }
  void showColorPoint();
};

void ColorPoint::showColorPoint(){
  cout << color << ": ";
  showPoint();
}

int main(){
  Point p;
  ColorPoint cp;
  cp.set(3,4);
  cp.setColor("Red");
  cp.showColorPoint();
}

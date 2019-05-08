// protected로 지정된 멤버는 파생 클래스에게만 접근을 허용한다.

// 예제 8-2 protected 멤버에 대한 접근
#include <iostream>
#include <string>
using namespace std;

class Point{  // 2차원 평면에서 한 점을 표현하는 클래스 Point 선언
protected:
  int x,y;  // 한 점 (x,y) 좌표값
public:
  void set(int x, int y){ this->x = x; this->y = y; }
  void showPoint(){
    cout << "(" << x << "," << y<< ")" << endl;
  }
};

class ColorPoint : public Point{  // 2차원 평면에서 컬러 점을 표현하는 클래스, ColorPoint는 Point를 상속받음.
  string color; // 점의 색 표현.
public:
  void setColor(string color){ this->color = color; }
  void showColorPoint();
  bool equals(ColorPoint p);
};

void ColorPoint::showColorPoint(){
  cout << color << ": ";
  showPoint();
}

bool ColorPoint::equals(ColorPoint p){
  if(x == p.x && y == p.y && color == p.color)
    return true;
  else
    return false;
}

int main(){
  Point p;
  p.set(2,3);
//  p.x = 5;  // 오류
//  p.y = 5;  // 오류
  p.showPoint();

  ColorPoint cp;
//  cp.x = 10;  // 오류
//  cp. y = 10; // 오류
  cp.set(3,4);
  cp.setColor("Red");

  ColorPoint cp2;
  cp2.set(3,4);
  cp2.setColor("Red");
  cout << ((cp.equals(cp2))? "true":"false");
}

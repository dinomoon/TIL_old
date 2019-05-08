#include <iostream>
#include <string>
using namespace std;

class Point{  // 2차원 평면에서 한 점을 표현하는 클래스 Point 선언
  int x,y;  // 한 점 (x,y) 좌표값
public:
  Point(int x = 0, int y = 0){ this->x = x; this->y = y; }
  void showPoint(){
    cout << "(" << x << "," << y ;
  }
};

class ColorPoint : public Point{  // 2차원 평면에서 컬러 점을 표현하는 클래스, ColorPoint는 Point를 상속받음.
  string color; // 점의 색 표현.
  int z;
public:
  ColorPoint(int x, int y, int z): Point(x,y){ this->z = x+y+z; }
  void setColor(string color){ this->color = color; }
  void showColorPoint();
};

void ColorPoint::showColorPoint(){
  cout << color << ": ";
  showPoint();
  cout << "," << z << ")" << endl;
}

int main(){
  ColorPoint cp2(4,4,5);
  cp2.setColor("Red");
  cp2.showColorPoint();

}

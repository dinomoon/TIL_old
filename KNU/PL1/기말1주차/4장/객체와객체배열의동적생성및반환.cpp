// 기본
// 클래스이름 *포인터변수 = new 클래스이름;  -> 기본 생성자 호출
// 클래스이름 *포인터변수 = new 클래스이름(생성자매개변수리스트);  -> 매개 변수 있는 생성자 호출

// Circle *p = new Circle;
// Circle *q = new Circle(30);
// delete p;
// delete q;

#include<iostream>
using namespace std;

class Circle{
  int radius;
public:
  Circle();
  Circle(int r);
  ~Circle();
  void setRadius(int r){ radius = r; }
  double getArea(){ return 3.14 * radius * radius; }
};

Circle::Circle(){
  radius = 1;
  cout << "Run the constructor, radius is " << radius << endl;
}

Circle::Circle(int r){
  radius = r;
  cout << "Run the constructor, radius is " << radius << endl;
}

Circle::~Circle(){
  cout << "Run the destructor radius is " << radius << endl;
}

int main(){
  int radius;
  while(true){
    cout << "Please input the radius, if radius is minus, then this program is end.";
    cin >> radius;
    if(radius < 0) break;
    Circle *p = new Circle(radius);
    cout << "the Circle`s area is " << p->getArea() << endl;
    delete p;
  }
}

// 예제 4-2 Circle 클래스의 배열 선언 및 활용
#include <iostream>
using namespace std;

class Circle{
  int radius;
public:
  Circle(){ radius = 1; }
  Circle(int r){ radius = r; }
  void setRadius(int r){ radius = r; }
  double getArea();
};

double Circle::getArea(){
  return 3.14 * radius * radius;
}

int ex1(){
  Circle circleArray[3]; // Circle 객체 배열 생성 => 기본 생성자 호출! => 기본 생성자 없으면 컴파일 오류!

  // 배열의 각 원소 객체의 멤버 접근
  circleArray[0].setRadius(10);
  circleArray[1].setRadius(20);
  circleArray[2].setRadius(30);

  for(int i=0; i<3; i++)  // 배열의 각 원소 객체의 멤버 접근
    cout << "Circle " << i << "'s area: " << circleArray[i].getArea() << endl;

  Circle *p;  // 객체 포인터 생성
  p = circleArray;  // 객체 포인터에 객체 배열의 주소저장
  for(int i=0; i<3; i++){ // 객체 포인터로 배열 접근
    cout << "Circle " << i << "'s area: " << p->getArea() << endl;
    p++;  // 다음 Circle 객체 주소로 증가
  }
  // 위의 코드와 같은 코드!
  Circle *p2;
  p2 = circleArray;
  for(int i=0; i<3; i++){ // 객체 포인터로 배열 접근
    cout << "Circle " << i << "'s area: " << p2[i].getArea() << endl;
  }
}

// 예제 4-4 Circle 클래스의 2차원 배열 선언 및 활용
int ex2(){
  Circle circles[2][3];

  circles[0][0].setRadius(1);
  circles[0][1].setRadius(2);
  circles[0][2].setRadius(3);
  circles[1][0].setRadius(4);
  circles[1][1].setRadius(5);
  circles[1][2].setRadius(6);

  for(int i=0; i<2; i++)
    for(int j=0; j<3; j++){
      cout << "Circle [" << i << "," << j << "] area: ";
      cout << circles[i][j].getArea() << endl;
    }
}

int main(){
  ex2();
}

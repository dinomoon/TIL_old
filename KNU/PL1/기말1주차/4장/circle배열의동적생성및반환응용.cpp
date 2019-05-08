// 원의 개수를 입력받고 Circle 배열을 동적 생성하라.
// 반지름 값을 입력받아 Circle 배열에 저장하고, 면적이 100에서 200사이인 원의 개수를 출력하라.

#include <iostream>
using namespace std;

class Circle{
  int radius;
public:
  Circle(){ radius = 1; }
  void setRadius(int r){ radius = r; }
  double getArea();
};

double Circle::getArea(){
  return 3.14 * radius * radius;
}

int main(){
  cout << "input the circle`s number ";
  int n, radius, count=0;
  cin >> n;
  Circle *pArray = new Circle[n];  // Circle 클래스에서 pArray라는 이름의 객체배열을 n개 생성;
  for(int i=0; i<n; i++){
    cout << "input the radius ";
    cin >> radius;
    pArray[i].setRadius(radius);
  }
  Circle *p;  // 객체포인터 p 생성;
  p = pArray; // 객체포인터 p에 객체배열 pArray 지정;
  for(int i=0; i<n; i++){
    cout << p->getArea() << endl;
    if (p->getArea() >=100 && p->getArea() <= 200)
      count += 1;
    p++;
  }
  cout << count << endl;
  delete [] pArray;
}

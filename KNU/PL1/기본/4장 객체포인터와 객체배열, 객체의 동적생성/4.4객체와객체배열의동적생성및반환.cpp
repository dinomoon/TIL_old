// 예제 4-7 Circle 객체의 동적 생성 및 반환

#include <iostream>
using namespace std;

class Circle{
  int radius;
public:
  Circle();
  Circle(int r);
  ~Circle();
  void setRadius(int r){ radius = r; }
  double getArea(){ return 3.14 * radius * radius; };
};

Circle::Circle(){
  radius = 1;
  cout << "make radius = " << radius << endl;
}
Circle::Circle(int r){
  radius = r;
  cout << "make radius = " << radius << endl;
}

Circle::~Circle(){
  cout << "delete radius = " << radius << endl;
}

int ex1(){
  Circle *p, *q;
  p = new Circle;
  q = new Circle(30);
  cout << p->getArea() << endl << q->getArea() << endl;
  delete p;
  delete q;
}

// 예제 4-8 Circle 객체의 동적 생성 및 반환 응용
int ex2(){
  int radius;
  while(true){
    cout << "if radius < 0, then this program is  end. what is the radius? " ;
    cin >> radius;
    if(radius < 0) break;
    Circle *p = new Circle(radius); // 동적 객체 생성
    cout << "Circle`s area: " << p->getArea() << endl;
    delete p;
  }
}

// 예제 4-9 Circle 배열의 동적 생성 및 반환
int ex3(){
  Circle *pArray = new Circle[3]; // 객체 배열의 동적 생성
  pArray[0].setRadius(10);
  pArray[1].setRadius(20);
  pArray[2].setRadius(30);

  for(int i=0; i<3; i++){
    cout << pArray[i].getArea() << endl;
  }

  Circle *p = pArray; // 포인터 p에 배열의 주소값 설정
  for(int i=0; i<3; i++){
    cout << p->getArea() << endl;
    p++;
  }

  delete [] pArray; // 객체 배열 변환
}

// 예제 4-10 Circle 배열의 동적 생성 및 반환 응용
// 반지름 값을 입력받아 Circle 배열에 저장하고, 면적이 100에서 200사이인 원의 개수를 출력하라.
int ex4(){
  int n,radius;
  cout << "what is your circle`s num? " ;
  cin >> n;
  Circle *pArray = new Circle[n];

  for(int i=0; i<n; i++){
    cout << "what is the radius? " << i+1 << ": " ;
    cin >> radius;
    pArray[i].setRadius(radius);
  }

  int count = 0;
  for(int i=0; i<n; i++){
    cout << pArray[i].getArea() << " ";
    if(pArray[i].getArea() >=100 && pArray[i].getArea() <=200)
      count += 1;
  }
  cout << endl << "count: " << count << endl;
}
int main(){
  ex4();
}

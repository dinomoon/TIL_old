// 짧은 코드로 구성된 함수에 대해, 함수 호출 오버헤드로 인한 프로그램의 실행 속도 저하를 막기 위해
// 도입된 기능

//  멤버 함수의 인라인 선언과 자동 인라인
class Circle(){
  int radius;
public:
  Circle();
  Circle(int r);
  double getArea();
};

inline Circle::Circle(){
  radius = 1;
}

Circle::Circle(int r){
  radius = r;
}

inline double Circle::getArea(){
  return 3.14 * radius * radius;
}
// 위의 코드와 밑의 코드는 같은 코드!!!!
class Circle{
  int radius;
public:
  Circle(){ radius = 1; } // 자동 인라인
  Circle(int r);
  double getArea(){ return 3.14 * radius * radius; } // 자동 인라인
};
Circle::Circle(int r){ radius = r; }

// 상속의 종류: public, protected, private 상속

// public 상속: 기본 클래스를 public으로 상속받으면,
// 기본 클래스의 protected, public 멤버들은 접근 지정 변경 없이 파생 클래스에 그대로 상속된다.

// protected 상속: 기본 클래스를 protected로 상속받으면,
// 기본 클래스의 protected, public 멤버들은 모두 protected 접근 지정으로 변경되어 파생 클래스에 상속된다.

// private 상속: 기본 클래스를 private로 상속받으면,
// 기본 클래스의 protected, public 멤버들은 모두 private 접근 지정으로 변경되어 파셍 클래스에 상속된다.

// 예제 8-4 private 상속 사례
// 다음에서 컴파일 오류가 발생하는 부분을 찾아라.

#include <iostream>
using namespace std;

class Base{
  int a;
protected:
  void setA(int a){ this->a = a; }
public:
  void showA(){ cout << a; }
};

class Derived : private Base {  // private 상속
  int b;
protected:
  void setB(int b){ this->b = b; }
public:
  void showB(){ cout << b; }
};

int main(){
  Deried x;
  x.a = 5;  // 오류
  x.setA(10); // 오류
  x.showA();  // 오류
  x.b = 10; // 오류
  x.setB(10); // 오류
  x.showB();
  // protected 상속 받아도 같은 결과..!
}

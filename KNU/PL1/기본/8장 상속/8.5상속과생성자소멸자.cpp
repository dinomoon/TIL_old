// 1. 파생 클래스와 기본 클래스의 생성자 호출 및 실행 관계
// 파생 클래스의 생성자를 호출하면 먼저 기본 클래스의 생성자가 실행된 후에 파생 클래스의 생성자가 실행된다.
// 소멸자는 파생 클래스가 먼저 소멸된다.

// 2. 파생 클래스에서 기본 클래스 생성자 호출
// 파생 클래스의 각 생성자에 대해 함께 실행될 기본 클래스의 생성자를 명시적으로 지정하지 않으면
// 컴파일러는 묵시적으로 기본 클래스의 기본 생성자가 실행되도록 컴파일한다.
// 기본 생성자가 선언되어 있지 않으면 오류발생
#include <iostream>
using namespace std;

class A{
public:
  A(){ cout << "A" << endl; }
  A(int x){ cout << x << endl; }
};

class B : public A {
public:
  B(){ cout << "B" << endl; } // A()를 호출하도록 컴파일되어있다
  B(int x) : A(x+3) {   // 명시적인 기본 클래스의 생성자 선택
    cout << x << endl;
  }
};


// 예제 8-3 TV, Wide TV, Smart TV의 상속관계와 생성자 매개 변수 전달
#include <string>
class TV{
  int size;
public:
  TV(){ size = 20; }
  TV(int size){ this->size = size; }
  int getSize(){ return size; }
};

class WideTV : public TV{
  bool videoIn;
public:
  WideTV(int size, bool videoIn) : TV(size){
    this->videoIn = videoIn;
  }
  bool getVideoIn(){ return videoIn; }
};

class SmartTV : public WideTV{
  string ipAddr;
public:
  SmartTV(string ipAddr, int size) : WideTV(size, true){
    this->ipAddr = ipAddr;
  }
  string getIpAddr(){ return ipAddr; }
};

int main(){
  B b(5); // 8과 5출력..!

  SmartTV htv("192.0.0.1", 32);
  cout << "size = " << htv.getSize() << endl;
  cout << "videoIn = " << boolalpha << htv.getVideoIn() << endl;
  cout << "IP = " << htv.getIpAddr() << endl;
}

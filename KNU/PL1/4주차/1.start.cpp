#include<iostream>
using namespace std;
struct tag{
  int x;
  int y;
};
class coord{
private:
  int x;
  int y;
public: //공공익
  coord(){  // 생성자함수 constructor
    x = 0;
    y = 0;
  }
  coord(int a, int b){ // 생성자함수 constructor
    x = a;
    y = b;
  }
  coord(int a = 0, int b = 0) : x(a), y(b) {} // 위 두개의 생성자함수를 합친 것.
  void set(int a, int b)  //멤버함수 member function
  {
    x = a; y = b;
  }
  int printx(){
    return x;
  }
  int printy(){
    return y;
  }
};

int main(){
  int i = 123;
  cout << "Hello world"<< "\n" << "\n";

  struct tag st1;
  st1.x = 10;
  st1.y = 20;
  cout << st1.x << "  " << st1.y << endl;

  coord c1;
  c1.set(10, 20);
  // c1.x = 10;
  // c1.y = 20;
  cout << c1.printx() << "  " << c1.printy() << endl;

  coord c2(1,2);
  cout << c2.printx() << "  " << c2.printy() << endl;

  return 0;
}

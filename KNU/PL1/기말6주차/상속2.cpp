#include <iostream>
using namespace std;

class base{
  int a;
protected:
  void setA(int a){ this->a = a; }
public:
  void showA(){ cout << a; }
};

class derived : private base{
  int b;
protected:
  void setB(int b){ this->b = b; }
public:
  void showB(){ showA(); cout << b; }
};

int main(){
  derived x;
  x.setB(10);
  x.showB();
}

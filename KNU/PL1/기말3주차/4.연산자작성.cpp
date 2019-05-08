// 335p 두 개의 power 객체를 더하는 + 연산자 작성
#include <iostream>
using namespace std;

class Power{
  int kick;
  int punch;
public:
  Power(int kick=0, int punch=0){
    this->kick = kick; this->punch = punch;
  }
  void show();
  Power operator+ (Power op2);  // 리턴타입이 클래스명(Power)
};

void Power::show(){
  cout << "kick= " << kick << "," << "punch= " << punch << endl;
}

Power Power::operator+ (Power ob2){ // 리턴타입 = 클래스명(Power)
  Power tmp;
  tmp.kick = this->kick + ob2.kick;
  tmp.punch = this->punch + ob2.punch;
  return tmp;
}

int main(){
  Power a(3,5), b(4,6), c;
  c = a+b;
  a.show();
  b.show();
  c.show();
}

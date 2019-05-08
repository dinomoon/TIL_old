// 337p 두 개의 Power 객체를 비교하는 == 연산자 작성
#include<iostream>
using namespace std;

class Power{
  int kick;
  int punch;
public:
  Power(int kick=0, int punch=0){ this->kick = kick; this->punch = punch; }
  void show();
  bool operator== (Power op2); // return타입 bool
};

void Power::show(){
  cout << "kick= " << kick << "," << "punch= " << punch << endl;
}

bool Power::operator== (Power op2){
  if(this->kick==op2.kick && this->punch == op2.punch) return true;
  else return false;
}

int main(){
  Power a(3,5), b(3,5);
  a.show();
  b.show();
  if(a==b) cout << "equal" << endl;
  else cout << "not equal" << endl;
}

#include <iostream>
using namespace std;

class Frac{
  int num;    // 분자
  int denom;  // 분모
public:
  Frac(int a, int b=1){
    if(b==0) { cout << "denom can`t be zero!"; exit(1); }
    num = a; denom = b;
  }

  void add(Frac &ob){
    int bunja = ob.denom * num + denom * ob.num;
    int bunmo = ob.denom * denom;
    num = bunja;
    denom = bunmo;
  }

  void show(){
    if(denom != 1)
      cout <<  num << "/" << denom ;
    }
};

int main(){
  Frac ob1(2,3), ob2(1,3);
  ob1.add(ob2);
  ob1.show();
}

// 다중 상속: 하나의 파생 클래스가 여러 개의 기본 클래스를 상속 받는 것

// 예제 8-7 Adder와 Subtractor를 다중 상속받는 Calculator 클래스 작성

#include <iostream>
using namespace std;

class Adder{
protected:
  int add(int a, int b){ return a + b; }
};

class Subtractor{
protected:
  int minus(int a, int b){ return a - b;}
};

class Calculator : public Adder, public Subtractor{ // 다중 상속
public:
  int calc(char op, int a, int b);
};

int Calculator::calc(char op, int a, int b){
  int res = 0;
  switch(op){
    case '+' : res = add(a,b); break;
    case '-' : res = minus(a,b); break;
  }
  return res;
}

int main(){
  Calculator handCalculator;
  cout << "2 + 4 = " << handCalculator.calc('+', 2, 4) << endl;
  cout << "100 - 76 = " << handCalculator.calc('-', 100, 76) << endl;
}

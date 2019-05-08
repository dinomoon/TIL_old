// 변수는 지역변수(함수 안 선언), 전역변수(함수 밖 선언), 스태틱변수(함수 안 선언)가있다.
// 지역변수는 함수 시작시 메모리에 생기고 함수 종료시 메모리에서 사라진다.
// 전역변수는 프로그램 시작시 메모리에 생기고 프로그램 종료시 메모리에서 사라진다.
// 스태틱변수는 지역변수와 전역변수의 특징을 모두 가진다.
// 전역변수처럼 프로그램이 시작하고 종료될 때 생기고 사라지지만 함수 안에서만 사용가능 하다.
// 모든 객체가 공유해서 사용할 수 있기 때문에 사용한다.
#include <iostream>
using namespace std;

class Bank{
private:
  char name[20];
  char accId[20];
  int balance;
  static double iyul;
public:
  Bank(char *pn, char *pa, int b)
  { strcpy(name, pn);
    strcpy(accId, pa);
    balance = b;
  }
  void output()
  { cout << "name: " << name << endl;
    cout << "account: " << accId << endl;
    cout << "balance: " << balance << endl;
    cout << "iyul: " << iyul << endl;
  }
  static void set_iyul( double i )
  { iyul = i;
  }
};
double Bank::iyul = 0;

int main(){
  Bank::set_iyul(2.0);
  Bank hong("Hong", "1234", 1000);

  hong.output();
}

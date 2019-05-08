#include <iostream>
using namespace std;

class coord{      //coord: coordinate(좌표)
  int x,y;        //기본 접근 제한자가 private이기 때문에 안적어도 됌.
public:
  coord(int a, int b) { x = a; y = b;}
  void Show(){ cout << x << " " << y << endl; }
};

int main(){

  int k = 5;
  cout << k << "\n";
  coord ob(100, 200);
  ob.Show();

  coord *ob1 = &ob;   //포인터..?
  ob1->Show();        //간접 참조 연산자.

  return 0;
}

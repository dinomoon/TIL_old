#include <iostream>
using namespace std;

class coord{      //coord: coordinate(좌표)
  int x,y;        //기본 접근 제한자가 private이기 때문에 안적어도 됌.
public:
  // coord() {x = 0; y = 0;}
  // coord(int a, int b) { x = a; y = b;}
  // 밑에 메인함수처럼 초기값이 있는 경우에는
  // 초기값으로, 초기값이 없는 경우에는 각각 1로 초기화
  // 각각의 생성자 함수를 적으시오.
  coord(int a = 0, int b = 0) { x = a; y = b;} // 생성자 함수
  void setxy(int a = 0, int b = 0){ x = a; y = b;}
  void Show();
  void getxy(int& a, int& b); // 레퍼런스(별칭)

};

void coord :: Show()
{ cout << x << " " << y << endl; }

void coord :: getxy(int& a, int& b)
{
  a=x; b=y;
}

int main(){

  int k = 5;
  cout << k << "\n";
  coord ob(100, 200);
  ob.Show();

  coord *ob2 = &ob;
  ob2->setxy(1,2);
  ob2->Show();

  ob.Show();

  int i,j;
  ob.getxy(i,j);
  cout << i << "***" << j << endl;
  return 0;
}

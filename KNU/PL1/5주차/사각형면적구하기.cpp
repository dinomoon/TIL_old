#include <iostream>
#include <string>
using namespace std;

class coord{      //coord: coordinate(좌표)
  int x,y;        //기본 접근 제한자가 private이기 때문에 안적어도 됌.
public:
  // coord() {x = 0; y = 0;}
  // coord(int a, int b) { x = a; y = b;}
  // 밑에 메인함수처럼 초기값이 있는 경우에는
  // 초기값으로, 초기값이 없는 경우에는 각각 1로 초기화
  // 각각의 생성자 함수를 적으시오.
  coord(int a = 0, int b = 0) { x = a; y = b;}
  void setxy(int a = 0, int b = 0){ x = a; y = b;}
  void Show();
  void getxy(int& a, int& b); // 레퍼런스(별칭)
  int getarea(coord ob)
  {
    int dx = abs(x - ob.x);
    int dy = abs(y - ob.y);
    cout << "area: " << dx * dy << endl;
    return dx * dy;
  }
};

inline void coord :: getxy(int& a, int& b) // inline...........?
{
  a=x; b=y;
}
inline void coord :: Show()
{ cout << x << " " << y << endl; }

int main(){

  int k = 5;
  cout << k << "\n";
  coord ob(1, 3);
  coord ob2(3, 5);
  ob.Show();

  cout << "area: " << ob.getarea(ob2) << endl;

  coord *o;
  int n;
  cin >> n;
  o = new coord[n];     //new와 delete -> 책
  // coord o[100];
  for(int i=0; i<n; i++)
    o[i].setxy(i,0);

  for(int i=0; i<n; i++)
    o[i].Show();

  delete[] o;

  // string str;
  char str[100];
  cin.getline(str, 80, '\n') >> str; //enter를 누르지만 않으면 모두 출력해준다. (공백도 모두 출력)
  cout << str << endl;

  return 0;
}

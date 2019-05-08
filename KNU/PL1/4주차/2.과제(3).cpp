#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>

using namespace std;
class coord{
private:
  int x;
  int y;
public:
  coord(int a = 0, int b = 0) : x(a), y(b) {}
  void set(int a, int b){ x = a; y = b; }
  int printx(){ return x; }
  int printy(){ return y; }
  double distance(coord ob){
    int a = x - ob.x;                               //23~26줄 시험
    int b = y - ob.y;
    double c = sqrt((double)a*a + b*b);
    return c;
  }
  void center(coord ob){
    cout << (x+ob.x)/2 << " " << (y+ob.y)/2 << endl;
  }
};

int main(){

  int i = 123;
  cout << i << "\n";
  coord c1(3,4), c2;
  cout << c1.printx() << " " << c1.printy() << endl;
  cout << c2.printx() << " " << c2.printy() << endl;
  cout << "c1과 c2의 거리는 " << c1.distance(c2) <<endl;


  coord a[5];
  srand((unsigned)time(NULL));
  for(int i = 0; i<5; i++)
    a[i].set( rand()%100, rand()%100 );

  int p1,p2;
  double d = 0;
  for(int i = 0; i<5; i++)
    cout << i <<"("<< a[i].printx() << "," << a[i].printy() << ")" <<endl;
  for(int i = 0; i<4; i++)
    for(int j = i+1; j<5; j++)
      if( a[i].distance(a[j]) >= d) { p1 = i; p2 = j; }

  cout << p1 << " " << p2 << " " << d << endl;
  return 0;
}

// 파일입출력 배열 포인터 구조체 거리구하기

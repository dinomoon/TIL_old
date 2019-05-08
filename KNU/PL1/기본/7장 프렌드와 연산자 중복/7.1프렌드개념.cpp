// friend함수는 왜 필요할까?
// friend함수를 클래스의 멤버 함수로 작성하면 되자 않을까?
// 프로그램을 작성하다보면, 클래스 멤버 함수로는 적합하지 않지만, 클래스의 private, protected 멤버를 접근해야
// 하는 특별한 경우, 이 함수를 외부 함수로 작성하고 프렌드로 선언한다.

// 프렌드 함수를 선언할 수 있는 3가지 경우
// 1. 외부 함수를 프렌드로 선언.
// 2. 다른 클래스의 멤버 함수를 프렌드로 선언.
// 3. 다른 클래스의 모든 멤버 함수를 프렌드로 선언.

// 예제 7-1 외부 함수를 프렌드 함수로 만들기
#include<iostream>
using namespace std;

class Rect;
bool equals(Rect r, Rect s);

class Rect{
  int width, height;
public:
  Rect(int width, int height){ this->width = width; this->height = height; }
  friend bool equals(Rect r, Rect s); // 프렌드 함수 선언.
};

bool equals(Rect r, Rect s){
  if(r.width == s.width && r.height == r.height) return true;
  else return false;
}

int main(){
  Rect a(3,4), b(3,4);
  if(equals(a,b)) cout << "equal" << endl;
  else cout << "not equal" << endl;
}
